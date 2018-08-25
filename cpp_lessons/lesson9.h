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

namespace Lessons::Lesson9 {
    class A {
    public:
        A() {}

    public:
        virtual void f(int n) { std::cout << n << 1; }

        virtual ~A() {}

        void f(int n) const { std::cout << n; }
    };

    class B : public A {
    public:
        void f(int n) { std::cout << (n << 1); }

        void f(int n) const { std::cout << n + 1; }
    };

    int main(int argc, char *argv[]) {
        const A a;
        B b;
        A &c = b;
        const A *d = &b;

        a.f(2);
        b.f(2);
        c.f(1);
        d->f(1);

        std::cout << std::endl;

        return 0;
    }
}