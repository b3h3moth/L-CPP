#ifndef FINALEXAM_H
#define FINALEXAM_H

#include "GradedActivity.h"

/* La classe FinalExam e' una specializzazione della classe GradedActivity;
public e' lo specificatore d'accesso della classe base, sta ad indicare che i
membri pubblici della classe base diventeranno membri pubblici anche della 
classe derivata.

FinalExam e' la classe derivata, GradedActivity la classe base.

I membri private della classe base non possono essere acceduti direttamente 
dalla classe derivata, ma solo mediante le funzioni membro
*/

class FinalExam : public GradedActivity
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
