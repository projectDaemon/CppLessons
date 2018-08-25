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

namespace Lessons::Lesson13 {
    class A {
    public:
        A(int i) : m_i(i) {}

    public:
        int operator()(int i = 0) const { return m_i + i; }

        operator int() const { return m_i; }

    private:
        int m_i;

        friend int g(const A &);
    };

    int f(char c) {
        return c;
    }

    int g(const A &a) {
        return a.m_i;
    }

    int main(int argc, char *argv[]) {
        A f(2), g(3);

        std::cout << f(1) << g(f) << std::endl;

        return 0;
    }
}