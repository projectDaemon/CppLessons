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
#include <set>

namespace Lessons::Lesson18 {

    struct C {
        bool operator()(const int &a, const int &b) const {
            return a % 10 < b % 10;
        }
    };

    int main() {
        std::set<int> x({4, 2, 7, 11, 12, 14, 17, 2});
        std::cout << x.size();
        std::set<int, C> y(x.begin(), x.end());
        std::cout << y.size() << std::endl;

        return 0;
    }
}