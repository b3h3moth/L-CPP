#include "GradedActivity.h"

char GradedActivity::getLetterGrade() const
{
    char letter_grade;

    if (score > 89)
        letter_grade = 'A';
    else if (score > 79)
        letter_grade = 'B';
    else if (score > 69)
        letter_grade = 'C';
    else if (score > 59)
        letter_grade = 'D';
    else 
        letter_grade = 'E';

    return letter_grade;
}
