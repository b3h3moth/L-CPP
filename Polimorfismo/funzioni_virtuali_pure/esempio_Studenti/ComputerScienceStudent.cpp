#include <iostream>
using namespace std;

#include "ComputerScienceStudent.h"

// Calcola il numero delle ore rimanenti
int ComputerScienceStudent::getRemainingHours() const
{
    int required_hours;         // Ore richieste in totale
    int remaining_hours;        // Ore rimanenti

    // Calcolo delle ore richieste
    required_hours = MATHEMATICS_HOURS + COMPUTER_SCIENCE_HOURS + 
        GENERAL_EDU_HOURS;

    // Calcolo delle ore rimanenti
    remaining_hours = required_hours - (math_hours + cs_hours + gen_hours);

    return remaining_hours;
}
