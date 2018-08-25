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

namespace Lessons::Lesson34 {
    class A {
    public:
        virtual ~A() {

        }
    };

    class B : public A  {
    public:
        B(int i) : a(i) {}

        int a;
    };

    void foo(A a) {
        B *b = static_cast<B*>(&a);
        std::cout << b->a << std::endl;
    }

    void foo2(A &a)
    {
        B *b = static_cast<B*>(&a);
        std::cout << b->a << std::endl;
    }

    /*void foo2(const A &a)  // error
    {
        B *b = static_cast<B*>(&a);
        std::cout << b->a << std::endl;
    }*/

    void foo(A *a) {
        B *b = static_cast<B*>(a);
        std::cout << b->a << std::endl;
    }

    void main(int argc, char *argv[]) {
        B *b2 = new B(5);
        B b1(5);

        foo(*b2);
        foo2(b1);
        foo(b2);
    }
}