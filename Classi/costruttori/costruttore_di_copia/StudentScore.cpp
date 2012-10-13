#include <iostream>
#include <string>
using namespace std;

#include "StudentScore.h"

// Costruttore della classe StudenScore
StudentScore::StudentScore(string name, int num_scores)
{
    student_name = name;
    createTestScore(num_scores);
}

/* Costruttore di copia
E' un costruttore speciale poiche' serve per inizializzare un oggetto 
tramite un altro oggetto, e' una funzione membro con lo stesso nome della classe
e ha come argomento un riferimento - ancor meglio se costante - ad un oggetto 
della medesima classe.

Sostanzialmene ha le stesse caratteristiche degli altri costruttori, ad eccezion
fatta del parametro, viene inoltre invocato nei seguenti casi:
- Inizializzazione esplicita;
- Passaggio per valore ad una funzione;
- Restituzione di un oggetto temporaneo.
*/
StudentScore::StudentScore(const StudentScore &object)
{
    student_name = object.student_name;
    num_test_scores = object.num_test_scores;

    test_scores = new double[num_test_scores];
    for (int i=0; i<num_test_scores; i++)
        test_scores[i] = object.test_scores[i];
}
