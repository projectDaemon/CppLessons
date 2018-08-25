#include <lesson1.h>
#include <lesson2.h>
#include <lesson3.h>
#include <lesson4.h>
#include <lesson5.h>
#include <lesson6.h>
#include <lesson7.h>
#include <lesson8.h>
#include <lesson9.h>
#include <lesson10.h>
#include <lesson11.h>
#include <lesson12.h>
#include <lesson13.h>
#include <lesson14.h>
#include <lesson15.h>
#include <lesson16.h>
#include <lesson17.h>
#include <lesson18.h>
#include <lesson19.h>
#include <lesson20.h>
#include <lesson21.h>
#include <lesson22.h>
#include <lesson23.h>
#include <lesson24.h>
#include <lesson25.h>
#include <lesson26.h>
#include <lesson27.h>
#include <lesson28.h>
#include <lesson29.h>
#include <lesson30.h>
#include <lesson31.h>
#include <lesson32.h>
#include <lesson33.h>
#include <lesson34.h>
#include <lesson35.h>
#include <lesson36.h>
#include <lesson37.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "invalid param counter" << std::endl;;
	    return 1;
    }
    
    int lessonNumber = std::atoi(argv[1]);
    std::cout << "lesson number " << lessonNumber << std::endl;

    switch (lessonNumber)
    {
        case 1:
            Lessons::Lesson1::main(argc, argv);
            break;
        case 2: 
            Lessons::Lesson2::main(argc, argv);
            break;
        case 3:
            Lessons::Lesson3::main(argc, argv);
            break;
        case 4:
            Lessons::Lesson4::main(argc, argv);
            break;
        case 5:
            Lessons::Lesson5::main(argc, argv);
            break;
        case 6:
            Lessons::Lesson6::main(argc, argv);
            break;
        case 7:
            Lessons::Lesson7::main(argc, argv);
            break;
        case 8:
            Lessons::Lesson8::main(argc, argv);
            break;
        case 9:
            Lessons::Lesson9::main(argc, argv);
            break;
        case 10:
            Lessons::Lesson10::main(argc, argv);
            break;
        case 11:
            Lessons::Lesson11::main(argc, argv);
            break;
        case 12:
            Lessons::Lesson12::main(argc, argv);
            break;
        case 13:
            Lessons::Lesson13::main(argc, argv);
            break;
        case 14:
            Lessons::Lesson14::main(argc, argv);
            break;
        case 15:
            Lessons::Lesson15::main(argc, argv);
            break;
        case 16:
            Lessons::Lesson16::main(argc, argv);
            break;
        case 17:
            Lessons::Lesson17::main(argc, argv);
            break;
        case 18:
            Lessons::Lesson18::main(argc, argv);
            break;
        case 19:
            Lessons::Lesson19::main(argc, argv);
            break;
        case 20:
            Lessons::Lesson20::main(argc, argv);
            break;
        case 21:
            Lessons::Lesson21::main(argc, argv);
            break;
        case 22:
            Lessons::Lesson22::main(argc, argv);
            break;
        case 23:
            Lessons::Lesson23::main(argc, argv);
            break;
        case 24:
            Lessons::Lesson24::main(argc, argv);
            break;
        case 25:
            Lessons::Lesson25::main(argc, argv);
            break;
        case 26:
            Lessons::Lesson26::main(argc, argv);
            break;
        case 27:
            Lessons::Lesson27::main(argc, argv);
            break;
        case 28:
            Lessons::Lesson28::main(argc, argv);
            break;
        case 29:
            Lessons::Lesson29::main(argc, argv);
            break;
        case 30:
            Lessons::Lesson30::main(argc, argv);
            break;
        case 31:
            Lessons::Lesson31::main(argc, argv);
            break;
        case 32:
            Lessons::Lesson32::main(argc, argv);
            break;
        case 33:
            Lessons::Lesson33::main(argc, argv);
            break;
        case 34:
            Lessons::Lesson34::main(argc, argv);
            break;
        case 35:
            Lessons::Lesson35::main(argc, argv);
            break;
        case 36:
            Lessons::Lesson36::main(argc, argv);
            break;
        case 37:
            Lessons::Lesson37::main(argc, argv);
            break;
        default:
            std::cout << "Invalid lesson number" << std::endl;
            return 1;
    }

    return 0;
}
