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

namespace Lessons::Lesson1 {
    class A {
    public:
        explicit A(int n = 0) : m(n) {
            std::cout << "d";
        }

        A(const A &rhs) : m(rhs.m) {
            std::cout << "c";
        }

    private:
        int m;
    };

    void f(const A &a1, const A &a2 = A()) {

    }

    int main(int argc, char *argv[]) {
        A a(2), b;
        const A c(a), &d = c, e = b;
        b = d;
        A *p = new A(c), *q = &a;
        static_cast<void>(q);
        delete p;

        std::cout << std::endl;

        return 0;
    }
}
