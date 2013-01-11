#include "PassFailActivity.h"

char PassFailActivity::getLetterGrade() const
{
    char letter_grade;

    if (score >= min_passing_score)
        letter_grade = 'P';
    else letter_grade = 'F';

    return letter_grade;
}
