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

namespace Lessons::Lesson37 {

    void main(int argc, char *argv[]) {
        int n = 8;
        bool res[n];
        res[0] = 0 == 0U;
        res[1] = -1 < 0;
        res[2] = -1 < 0U;
        res[3] = 2147483647 > -2147483647 - 1;
        res[4] = 2147483647U > -2147483647 - 1;
        res[5] = 2147483647 > (int) 2147483648U;
        res[6] = -1 > -2;
        res[7] = (unsigned) -1 > -2;

        for (uint8_t i = 0; i < n; ++i) {
            std::cout << std::boolalpha << res[i] << std::endl;
        }

    }
}