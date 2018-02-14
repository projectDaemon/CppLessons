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

namespace Lessons::Lesson12 {
    class A {
    public:
        A(int n) : m_n(n) { std::cout << m_n; }

        ~A() { std::cout << m_n; }

    private:
        int m_n;
    };

    int f(int n) {
        if (1 == n) {
            throw std::logic_error("0");
        }
        A l(n);
        return f(n - 1) * n / (n - 1);
    }

    int main() {
        try {
            int r = f(3);
            A a(r);
        }
        catch (const std::exception &e) {
            std::cout << e.what() << std::endl;
        }

        return 0;
    }
}