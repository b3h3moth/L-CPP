#ifndef COMPUTERSCIENCESTUDENT_H
#define COMPUTERSCIENCESTUDENT_H

#include "Student.h"

const int MATHEMATICS_HOURS = 20;
const int COMPUTER_SCIENCE_HOURS = 40;
const int GENERAL_EDU_HOURS = 60;

/* La classe ComputerScienceStudent specializza la classe Student fornendo 
caratteristiche specifiche di uno studente di Computer Science, in particolare 
ci si concentra sul numero di ore. */

class ComputerScienceStudent : public Student
{
    public:
        // Costruttore di default
        ComputerScienceStudent() : Student() {
            math_hours = 0;
            cs_hours = 0;
            gen_hours = 0;
        }

        // Costruttore
        ComputerScienceStudent(string n, string id, int year) : 
            Student(n, id, year) {
                math_hours = 0;
                cs_hours = 0;
                gen_hours = 0;
            }

        void setMathHours(int mh) { math_hours = mh; }
        void setCSHours(int csh) { cs_hours = csh; }
        void setGenHours(int gh) { gen_hours = gh; }

        // Override della funzione virtuale getRemainingHours()
        virtual int getRemainingHours() const;

    private:
        int math_hours;
        int cs_hours;
        int gen_hours;
};

#endif
