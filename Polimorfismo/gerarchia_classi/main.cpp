#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

#include "PassFailExam.h"

int main() {
    int questions;          // numero di domande dell'esame
    int missed;             // numero di domande mancate
    double min_passing;     // Punteggio minimo per passare

    cout << "Quante domande ci sono nell'esame finale? ";
    cin >> questions;

    cout << "A quante domande lo studente non ha risposto? ";
    cin >> missed;

    cout << "Qual'e' il punteggio minimo da ottenere? ";
    cin >> min_passing;

    PassFailExam esame(questions, missed, min_passing);

    cout << setprecision(2);
    cout << "Ogni domanda vale: " << esame.getPointsEach() << " punti.\n";
    cout << "Punteggio  minimo: " << esame.getMinPassingScore() << endl;
    cout << "  Punteggio esame: " << esame.getScore() << endl;
    cout << "  Punteggio  voto: " << esame.getLetterGrade() << endl;
    
    return(EXIT_SUCCESS);
}
