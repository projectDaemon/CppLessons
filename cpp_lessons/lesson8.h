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

namespace Lessons::Lesson8 {
    class A {
    public:
        A(int n = 0)
                : m_i(n) {
            std::cout << m_i;
            ++m_i;
        }

    protected:
        int m_i;
    };

    class B
            : public A {
    public:
        B(int n = 5) : m_a(new A[2]), m_x(++m_i) { std::cout << m_i; }

        ~B() { delete[] m_a; }

    private:
        A m_x;
        A *m_a;
    };

    int main() {
        B b;

        std::cout << std::endl;

        return 0;
    }
}