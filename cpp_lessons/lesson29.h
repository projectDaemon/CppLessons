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
#include <stdexcept>

namespace Lessons::Lesson29 {
    class A {
    public:
        A(int n) {
            if (0 == n) {
                throw std::logic_error("0");
            }
        }
    };

    int main(int argc, char *argv[]) {
        A *p0 = nullptr, *p1 = nullptr, *p2 = nullptr;
        try {
            p1 = new A(1);
            p0 = new A(0);
            p2 = new A(2);
        }
        catch (const std::exception &) {
            std::cout << 3;
        }

        std::cout << ((0 != p1) ? 1 : 0);
        std::cout << ((0 != p0) ? 1 : 0);
        std::cout << ((0 != p2) ? 1 : 0) << std::endl;

        delete p1;
        delete p0;
        delete p2;

        return 0;
    }
}