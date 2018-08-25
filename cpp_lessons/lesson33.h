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

namespace Lessons::Lesson33 {
    void main(int argc, char *argv[]) {
        int a = 10;
        const int *p1 = &a; // pointer to constant type
        int const *p2 = &a; // pointer to constant type
        //*p1 = 20;   // error. cannot modify constant type
        p2 = 0;     // OK

        int *const p3 = &a;    // constant pointer to type
        // (* const)
        *p3 = 30;   // OK
        //p3 = 0;     // error. cannot change pointer address

        // constant pointer to constant type
        int const *const p4 = &a; // (int const) (* const)
        //*p4 = 30;   // error
        //p4 = 0;     // error
    }
}