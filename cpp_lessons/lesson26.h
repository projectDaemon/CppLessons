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
#include <iterator>

namespace Lessons::Lesson26 {
    bool compare(int a, int b)
    {
        return a % 2 == b % 2;
    }

    int main()
    {
        int a[] = {3, 1, 4, 6, 1, 3};
        auto b = std::begin(a);
        auto e = std::end(a);

        e = std::unique(b, e, compare);
        std::copy(b, e, std::ostream_iterator<int>(std::cout));

        std::cout << std::endl;

        return 0;
    }
}