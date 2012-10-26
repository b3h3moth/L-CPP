#include "FinalExam.h"

void FinalExam::set(int question, int missed)
{
    double numeric_score;

    num_questions = question;
    num_missed = missed;

    // Calcola i punti per ogni domanda
    points_each = 100.0 / num_questions;

    // Calcola il punteggio numerico dell'esame
    points_each = 100.0 - (missed * points_each);

    // Invoca la funzione ereditata per settare il punteggio numerico
    setScore(numeric_score);
}
