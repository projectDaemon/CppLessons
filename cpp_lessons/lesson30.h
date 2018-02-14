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
#include <vector>

namespace Lessons::Lesson30 {
    bool compare(int a, int b) {
        return a % 3 < b % 3;
    }

    int main() {
        typedef std::vector<int> V;
        V v({7, 0, 8, 5, 2, 11});

        std::sort(v.begin(), v.end());
        typedef V::const_reverse_iterator R;
        const R i = std::adjacent_find(v.rbegin(), v.rend(), compare);
        if (i == v.rend()) {
            std::cout << -1 << std::endl;
        } else {
            std::cout << *i << *(i + 1) << std::endl;
        }

        return 0;
    }
}