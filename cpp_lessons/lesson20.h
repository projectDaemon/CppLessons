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

namespace Lessons::Lesson20 {

    class A {
    public:
        A(int n = 0) : m_i(n) { std::cout << m_i; }

    protected:
        int m_i;
    };

    class B
            : public A {
    public:
        B(int n) : m_j(n), m_a(--m_j), m_b() { std::cout << m_j; }

    private:
        int m_j;
        A m_a;
        A m_b;
        static A m_c;
    };

    int main() {
        B b(2);

        std::cout << std::endl;

        return 0;
    }

    A B::m_c(3);
}