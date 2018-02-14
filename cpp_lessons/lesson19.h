/*
 * Lessons
 * Copyright (C) 2018
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include <algorithm>
#include <cassert>
#include <cstddef>
#include <functional>
#include <iostream>
#include <memory>
#include <vector>

namespace Lessons::Lesson19 {

    class A {
    public:
        A() : m_size(sizeof(A)) {}

    public:
        virtual void f() const { std::cout << 1; }

        virtual ~A() {}

    public:
        static bool compare(const A *a, const A *b) {
            assert(a != nullptr);
            assert(b != nullptr);
            return a->m_size < b->m_size;
        }

    protected:
        size_t m_size;
    };

    class B
            : public A {
    public:
        B() : m_b(nullptr) { m_size = sizeof(B); }

    public:
        virtual void f() const { std::cout << 2; }

    private:
        char *m_b;
    };

    class C
            : public A {
    public:
        C() { m_size = sizeof(C); }

    public:
        virtual void f() const { std::cout << 3; }

    private:
        static int *m_c;
    };

    int *C::m_c = nullptr;

    int main() {
        std::vector<A *> v({new C, new B, new A});
        std::stable_sort(v.begin(), v.end(), A::compare);
        std::for_each(v.begin(), v.end(), std::mem_fn(&A::f));
        std::cout << std::endl;
        std::for_each(v.begin(), v.end(), std::default_delete<A>());

        return 0;
    }
}