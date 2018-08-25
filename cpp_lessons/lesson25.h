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

#include <exception>
#include <iostream>

namespace Lessons::Lesson25 {
    class A {
    public:
        virtual ~A() {}
    };

    class B
            : public A {
    };

    class C
            : public A {
    };

    int main(int argc, char *argv[]) {
        try {
            B b;
            C c;
            A *pa1 = &b, *pa2 = &c;

            std::cout << ((dynamic_cast<B *>(pa1) != nullptr) ? 1 : 0);
            std::cout << ((dynamic_cast<B *>(pa2) != nullptr) ? 1 : 0);

            B &b1 = dynamic_cast<B &>(*pa2);
            pa1 = &b1;

            std::cout << ((static_cast<C *>(pa1) != nullptr) ? 1 : 0);
        }
        catch (const std::exception &) {
            std::cout << 2;
        }

        std::cout << std::endl;

        return 0;
    }
}