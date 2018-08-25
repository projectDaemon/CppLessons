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

namespace Lessons::Lesson28 {
    template<unsigned N>
    class A {
    public:
        A() { std::cout << N; }

    private:
        A<N - 1> m_a;
    };

    template<>
    class A<0> {
    public:
        A() { std::cout << 'A'; }
    };

    int main(int argc, char *argv[]) {
        { A<4>(); }

        std::cout << std::endl;

        return 0;
    }
}