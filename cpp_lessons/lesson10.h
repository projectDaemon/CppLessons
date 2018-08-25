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

#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

namespace Lessons::Lesson10 {

    class Int {
    public:
        Int(int i = 0) : m_i(i) {}

    public:
        bool operator<(const Int &a) const { return this->m_i < a.m_i; }

        Int &operator=(const Int &a) {
            this->m_i = a.m_i;
            ++m_assignments;
            return *this;
        }

        static int get_assignments() { return m_assignments; }

    private:
        int m_i;
        static int m_assignments;
    };

    int Int::m_assignments = 0;

    int main(int argc, char *argv[]) {
        std::list<Int> l({Int(3), Int(1)});
        l.sort();
        std::cout << (Int::get_assignments() > 0 ? 1 : 0);

        std::vector<Int> v({Int(2), Int()});
        std::sort(v.begin(), v.end());
        std::cout << (Int::get_assignments() > 0 ? 2 : 0) << std::endl;

        return 0;
    }
}