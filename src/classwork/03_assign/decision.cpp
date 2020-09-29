//cpp
#include "decision.h"


std::string get_letter_grade_using_if(int grade)
{
    std::string letter_grade;

    if (grade < 0 || grade > 100)
    {
        letter_grade = "Invalid input. Enter grade 0-100.";
    }
    else if (grade < 60)
    {
        letter_grade = "F";
    }
    else if (grade < 70)
    {
        letter_grade = "D";
    }
    else if (grade < 80)
    {
        letter_grade = "C";
    }
    else if (grade < 90)
    {
        letter_grade = "B";
    }
    else if (grade <= 100)
    {
        letter_grade = "A";
    }
    return letter_grade;
}

std::string get_letter_grade_using_switch(int grade)
{
    std::string letter_grade;
    switch(grade/10)
    {
        case 0:
        case 1: 
        case 2: 
        case 3: 
        case 4: 
        case 5: 
            letter_grade = "F";
            break;
        case 6:
            letter_grade = "D";
            break;
        case 7:
            letter_grade = "C";
            break;
        case 8:
            letter_grade = "B";
            break;
        case 9:
        case 10:
            letter_grade = "A";
            break;
        default: 
            letter_grade = "Invalid input. Enter grade 0-100.";
            break;
    }
    return letter_grade;
}