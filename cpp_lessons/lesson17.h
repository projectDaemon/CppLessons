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

namespace Lessons::Lesson17 {
    class A {
    public:
        A(int n = 2) : m_n(n) {}

    public:
        int get_n() const { return m_n; }

        void set_n(int n) { m_n = n; }

    private:
        int m_n;
    };

    class B {
    public:
        B(char c = 'a') : m_c(c) {}

    public:
        char get_c() const { return m_c; }

        void set_c(char c) { m_c = c; }

    private:
        char m_c;
    };

    class C
            : virtual public A, public B {
    };

    class D
            : virtual public A, public B {
    };

    class E
            : public C, public D {
    };

    int main() {
        E e;
        C &c = e;
        D &d = e;
        std::cout << c.get_c() << d.get_n();

        c.set_n(3);
        d.set_c('b');
        std::cout << c.get_c() << d.get_n() << std::endl;

        return 0;
    }
}