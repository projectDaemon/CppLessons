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
#include <vector>

namespace Lessons::Lesson2 {
    class A {
    public:
        A(int n = 0) : m_n(n) {}

    public:
        virtual int f() const { return m_n; }

        virtual ~A() {}

    protected:
        int m_n;
    };

    class B : public A {
    public:
        B(int n = 0) : A(n) {}

    public:
        virtual int f() const { return m_n + 1; }
    };

    int main(int argc, char *argv[]) {
        const A a(1);
        const B b(3);
        const A *x[2] = {&a, &b};
        typedef std::vector<A> V;
        V y({a, b});
        V::const_iterator i = y.begin();

        std::cout << x[0]->f() << x[1]->f()
                  << i->f() << (i + 1)->f() << std::endl;

        return 0;
    }
}
