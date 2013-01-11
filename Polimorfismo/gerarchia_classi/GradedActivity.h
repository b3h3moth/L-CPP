#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

/* Il compito della classe GradedActivity e' di conservare i voti ottenuti
dagli studenti, secondo il sistema Americano basato su numeri e lettere. */

class GradedActivity
{
    public:
        // Costruttore di default
        GradedActivity() { score = 0.0; };
        // Costruttore
        GradedActivity(double s) { score = s; };

        void setScore(double s) { score = s; };
        double getScore() const { return score;};
        
        char getLetterGrade() const;

    protected:
        double score;
};

#endif
