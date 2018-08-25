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

namespace Lessons::Lesson16 {
    class B {
    public:
        virtual int shift(int n = 2) const { return n << 2; }
    };

    class D
            : public B {
    public:
        D() {}

    public:
        int shift(int n = 3) const { return n << 3; }
    };

    int main(int argc, char *argv[]) {
        const D d;
        const B *b = &d;

        std::cout << b->shift() << std::endl;

        return 0;
    }
}