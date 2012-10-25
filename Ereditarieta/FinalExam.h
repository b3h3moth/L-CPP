#ifndef FINALEXAM_H
#define FINALEXAM_H

#include "GradeActivity.h"

/* La classe FinalExam e' una specializzazione della classe GradeActivity */

class FinalExam : public GradeActivity
{
    public:
        // Costruttore di default
        FinalExam() {num_questions = 0; points_each = 0.0; num_questions = 0;};
        // Costruttore
        FinalExam(int question, int missed) { set(question, missed);};

        void set(int question, int missed);
        double getNumQuestions() const { return num_questions;};
        double getPointsEach() const { return points_each;};
        int getNumMissed() const { return num_missed;};

    private:
        int num_questions;
        double points_each;
        int num_missed;
};

#endif
