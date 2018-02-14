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

namespace Lessons::Lesson31 {
    class A {
    public:
        A() { std::cout << "A" << std::endl; }

        ~A() { std::cout << "~A" << std::endl; }
    };

    class B : public A {
    public:
        B() { std::cout << "B" << std::endl; }

        ~B() { std::cout << "~B" << std::endl; }
    };

    class C : public A {
    public:
        C() { std::cout << "C" << std::endl; }

        ~C() { std::cout << "~C" << std::endl; }
    };

    void main() {
        std::shared_ptr <A> x = std::make_shared<B>();
        std::unique_ptr <A> y = std::make_unique<C>();
    }
}