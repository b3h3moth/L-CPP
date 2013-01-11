#ifndef PASSFAILEXAM_H
#define PASSFAILEXAM_H

#include "PassFailActivity.h"

/* La classe PassFailExam e' una specializzazione della classe PassFailActivity;
poiche' lo specificatore di accesso della classe base utilizato e' public, tutti
i membri dichiarati protected nella classe base, ossia PassFailActivity, saranno
ereditati come protected nella classe ereditata, inclusi quelli ancor piu' su 
nella gerarchia, ovvero nella classe base GradedActivity.

Nota: Ovviamente lo stesso discorso vale per i membri ereditati public.

La gerarchia pertanto e' la seguente

            /----------------\
            | GradedActivity |
            \----------------/
                   /|\
                    |
                    |
            ________|_________
            |                |
            |                |
/----------------\      /------------------\
| FinalExam      |      | PassFailActivity |
\----------------/      \------------------/
                             |
                             |
                        /------------------\
                        | PassFailExam     |
                        \------------------/
*/


class PassFailExam : public PassFailActivity
{
    public:
        // Costruttore di default
        PassFailExam() : PassFailActivity() {
            num_questions = 0;
            points_each = 0.0;
            num_missed = 0;
        }

        // Costruttore
        PassFailExam(int questions, int missed, double mps) :
            PassFailActivity(mps) { set(questions, missed); }

        void set(int questions, int missed);
        int getNumQuestions() const { return num_questions; }
        double getPointsEach() const { return points_each; }
        int getNumMissed() const { return num_missed; }

            
    private:
        int num_questions;      // Numero di domande
        double points_each;     // Punti per ciascuna domanda
        int num_missed;         // Numero di domande a cui non si e' risposto

};

#endif
