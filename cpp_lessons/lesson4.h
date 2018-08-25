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

namespace Lessons::Lesson4 {
    class A {
    public:
        A() : m_i(0) {}

    protected:
        int m_i;
    };

    class B {
    public:
        B() : m_d(0.0) {}

    protected:
        double m_d;
    };

    class C : public A, public B {
    public:
        C() : m_c('a') {}

    private:
        char m_c;
    };

    int main(int argc, char *argv[]) {
        C c;
        A *pa = &c;
        B *pb = &c;

        const int x = (pa == &c) ? 1 : 2;
        const int y = (pb == &c) ? 3 : 4;
        const int z = (reinterpret_cast<char *>(pa) == reinterpret_cast<char *>(pb)) ? 5 : 6;

        std::cout << x << y << z << std::endl;

        return 0;
    }
}