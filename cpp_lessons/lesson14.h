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

namespace Lessons::Lesson14 {
    class A {
    public:
        explicit A(int n = 0) : m_n(n) {}

    public:
        A &operator=(const A &a) {
            this->m_n = a.m_n;
            ++m_assignment_calls;
            return *this;
        }

    public:
        static int m_assignment_calls;

    private:
        int m_n;
    };

    int A::m_assignment_calls = 0;

    A f(const A &a) { return a; }

    A g(const A a) { return a; }

    int main(int argc, char *argv[]) {
        A a(3);
        A b = a;
        std::cout << A::m_assignment_calls;

        b = g(a);
        g(b);
        std::cout << A::m_assignment_calls;

        const A &c = f(b);
        std::cout << A::m_assignment_calls << std::endl;

        return 0;
    }
}