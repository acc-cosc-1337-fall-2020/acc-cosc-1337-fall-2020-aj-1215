//cpp
#include "decision.h"


int get_letter_grade_using_if(int grade)
{
    char letter_grade;

    if (grade < 0 || grade > 100)
    {
        letter_grade = 'Invalid input. Enter grade 0-100.';
    }
    else if (grade < 60)
    {
        letter_grade = 'E';
    }
    else if (grade < 70)
    {
        letter_grade = 'D';
    }
    else if (grade < 80)
    {
        letter_grade = 'C';
    }
    else if (grade < 90)
    {
        letter_grade = 'B';
    }
    else if (grade <= 100)
    {
        letter_grade = 'A';
    }
    return letter_grade;
}

int get_letter_grade_using_switch(int grade)
{
    char letter_grade;
    switch(grade)
    {
        case 1: grade < 60;
            letter_grade = 'E';
            break;
        case 2: grade < 70;
            letter_grade = 'D';
            break;
        case 3: grade < 80;
            letter_grade = 'C';
            break;
        case 4: grade < 90;
            letter_grade = 'B';
            break;
        case 5: grade <= 100;
            letter_grade = 'A';
            break;
        default: grade < 0 || grade > 100;
            letter_grade = 'Invalid input. Enter grade 0-100.';
            break;
    }
    return letter_grade;
}