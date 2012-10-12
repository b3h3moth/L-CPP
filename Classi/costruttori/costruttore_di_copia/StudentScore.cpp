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
E' un costruttore particolare, invocato quando un oggetto viene  inizializzato 
con dati di un altro oggetto; ha le medesime caratteristiche degli altri 
costruttori, ad eccezione del parametro, che dev'essere un riferimento allo
stesso tipo di classe dell'oggetto. */
StudentScore::StudentScore(StudentScore &object)
{
    student_name = object.student_name;
    num_test_scores = object.num_test_scores;

    test_scores = new double[num_test_scores];
    for (int i=0; i<num_test_scores; i++)
        test_scores[i] = object.test_scores[i];
}
