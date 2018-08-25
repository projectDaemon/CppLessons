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

namespace Lessons::Lesson11
{
    struct P
    {
        bool operator()(const int &n) const
        {
            return n % 3 == 0;
        }
    };

    int main(int argc, char *argv[])
    {
        std::list<int> l({ 5, 2, 6, 1, 13, 9, 19 });
        std::cout << l.size();
        std::remove_if(l.begin(), l.end(), P());
        std::cout << l.size() << std::endl;

        return 0;
    }
}