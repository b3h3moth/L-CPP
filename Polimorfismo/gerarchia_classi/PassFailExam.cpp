#include "PassFailExam.h"

void PassFailExam::set(int questions, int missed)
{
    double numeric_score;

    num_questions = questions;
    num_missed = missed;

    // Calcola il punteggio per ciascuna domanda
    points_each = 100.0 / num_questions;

    // Calcola il valore numero dell'esame
    numeric_score = 100.0 - (missed * points_each);

    setScore(numeric_score);
}
