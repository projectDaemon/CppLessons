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
#include <memory>
#include <utility>

namespace Lessons::Lesson22 {
    typedef std::unique_ptr<int> P;

    struct is_null {
        bool operator()(const P &p) const {
            return !bool(p);
        }
    };

    int main(int argc, char *argv[]) {
        P p[] = {P(new int(1)), P(new int(0)), P(nullptr), P(new int(2)), P()};
        auto b = std::begin(p);
        auto e = std::end(p);

        std::cout << std::count_if(b, e, is_null());

        P x = std::move(p[0]);
        P &y = p[1];
        static_cast<void>(y);
        p[2] = std::move(p[3]);

        std::cout << std::count_if(b, e, is_null()) << std::endl;

        return 0;
    }
}