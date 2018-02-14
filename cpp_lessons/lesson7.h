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

namespace Lessons::Lesson7 {
    template<class T, T t = T()>
    class A {
    private:
        template<bool b>
        class B {
        public:
            static const int m_n = b ? 1 : 0;
        };

    public:
        static const int m_value = B<(t > T())>::m_n - B<(t < T())>::m_n;
    };

    int main() {
        std::cout << A<int, -9>::m_value
                  << A<bool, true>::m_value
                  << A<char>::m_value << std::endl;

        return 0;
    }
}