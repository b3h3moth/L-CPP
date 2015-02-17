#ifndef PASSFAILACTIVITY_H
#define PASSFAILACTIVITY_H

#include "GradedActivity.h"

/* La classe PassFailActivity e' una specializzazione della classe 
GradedActivity; il suo compito e' la definizione di un punteggio minimo mediante
il quale si potra' ottenere la lettera P oppure la lettera F, ossia passaggio e 
fallimento dell'esame */

class PassFailActivity : public GradedActivity
{
    public:
        // Costruttore di default
        PassFailActivity() : GradedActivity() { min_passing_score = 0.0;};

        // Costruttore
        PassFailActivity(double mps) : GradedActivity() { 
            min_passing_score = mps;
        };

        void setMinPassingScore(double mps) { min_passing_score = mps; }
        double getMinPassingScore() const { return min_passing_score; };

        char getLetterGrade() const;
            
    protected:
        double min_passing_score;

};

#endif
