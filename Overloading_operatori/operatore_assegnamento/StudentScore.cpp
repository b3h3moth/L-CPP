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

// Costruttore di copia
StudentScore::StudentScore(const StudentScore &object)
{
    student_name = object.student_name;
    num_test_scores = object.num_test_scores;

    test_scores = new double[num_test_scores];
    for (int i=0; i<num_test_scores; i++)
        test_scores[i] = object.test_scores[i];
}

// Ridefinizione operatore =
const StudentScore StudentScore::operator=(const StudentScore &right_side)
{
    delete [] test_scores;

    student_name = right_side.student_name;
    num_test_scores = right_side.num_test_scores;
    test_scores = new double[num_test_scores];

    for(int i=0; i<num_test_scores; i++)
        test_scores[i] = right_side.test_scores[i];

    return *this;
}
