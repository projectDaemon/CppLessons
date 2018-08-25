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

#include <iostream>

namespace Lessons::Lesson15 {
    class A {
    public:
        A(int n = 0) : m_n(n) {}

        A(const A &a) : m_n(a.m_n) { ++m_copy_ctor_calls; }

        ~A() { ++m_dtor_calls; }

    private:
        int m_n;

    public:
        static int m_copy_ctor_calls;
        static int m_dtor_calls;
    };

    int A::m_copy_ctor_calls = 0;
    int A::m_dtor_calls = 0;

    int main(int argc, char *argv[]) {
        A *p = nullptr;
        {
            const A a = 2;
            p = new A[3];
            p[0] = a;
        }
        std::cout << A::m_copy_ctor_calls << A::m_dtor_calls;
        p[1] = A(1);
        p[2] = 2;
        delete[] p;
        std::cout << A::m_copy_ctor_calls << A::m_dtor_calls << std::endl;

        return 0;
    }
}