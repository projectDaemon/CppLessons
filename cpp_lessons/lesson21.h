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

namespace Lessons::Lesson21 {
    class A {
    public:
        A() { f(); }

        virtual ~A() {}

    public:
        virtual void f() const { std::cout << 1; }
    };

    class B
            : public A {
    public :
        B() { f(); }

    private:
        virtual void f() const { std::cout << 2; }
    };

    int main() {
        const A *a = new B;
        delete a;

        std::cout << std::endl;

        return 0;
    }
}