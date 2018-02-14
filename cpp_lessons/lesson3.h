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

namespace Lessons::Lesson3 {
    class A {
    public:
        A(int n = 2) : m_i(n) {}

        ~A() { std::cout << m_i; }

    protected:
        int m_i;
    };

    class B : public A {
    public:
        B(int n) : m_a1(m_i + 1), m_a2(n) {}

    public:
        ~B() {
            std::cout << m_i;
            --m_i;
        }

    private:
        A m_a1;
        A m_a2;
    };

    int main() {
        { B b(5); }

        std::cout << std::endl;

        return 0;
    }
}