#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

#include "FinalExam.h"

int main() {
    int questions;  // numero di domande dell'esame
    int missed;     // numero di domande mancate

    cout << "Quante domande ci sono nell'esame finale? ";
    cin >> questions;

    cout << "A quante domande lo studente non ha risposto? ";
    cin >> missed;

    FinalExam test(questions, missed);

    cout << setprecision(2);
    cout << "Ogni domanda vale:  " << test.getPointsEach() << " punti.\n";
    cout << "Punteggio esame: " << test.getScore() << endl;
    cout << "Punteggio  voto: " << test.getLetterGrade() << endl;
    
    return(EXIT_SUCCESS);
}
