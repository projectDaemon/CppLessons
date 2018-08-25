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
#include <functional>
#include <iostream>
#include <iterator>
#include <list>

namespace Lessons::Lesson5 {
    int main(int argc, char *argv[]) {
        typedef std::list<int> L;
        L l(5);

        typedef L::const_iterator CI;
        CI cb = l.begin(), ce = l.end();
        typedef L::iterator I;
        I b = l.begin();

        std::transform(cb, --ce, ++b, [](CI::value_type n) { return ++n; });
        std::copy(l.begin(), l.end(), std::ostream_iterator<CI::value_type>(std::cout));
        std::cout << std::endl;

        return 0;
    }
}