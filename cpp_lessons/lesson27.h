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
#include <memory>

namespace Lessons::Lesson27 {
    class A {
    public:
        A() : m_n(++m_object_id) {}

        ~A() { std::cout << m_n; }

    private:
        const int m_n;
        static int m_object_id;
    };

    int A::m_object_id = 0;

    int main() {
        A *const p = new A[2];
        A *const q = reinterpret_cast<A *const>(new char[2 * sizeof(A)]);

        new(q) A;
        new(q + 1) A;
        q->~A();
        q[1].~A();
        delete[] reinterpret_cast<char *>(q);
        delete[] p;

        std::cout << std::endl;

        return 0;
    }
}