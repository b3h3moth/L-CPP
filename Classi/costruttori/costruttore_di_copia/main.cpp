#include <iostream>
#include <cstdlib>
using namespace std;

#include "StudentScore.h"

int main() {
    StudentScore student1("John Doe", 7);

    student1.setTestScore(28, 1);
    student1.setTestScore(30, 2);

    // Viene invocato il costruttore di copia
    StudentScore student2 = student1;
    
    student2.setStudentName("liuc Suriancic");

    cout << "studente 1: " << student1.getStudentName() << "/" 
         << student1.getNumTestScores() << "/"
         << student1.getTestScore(1) << endl;

    cout << "studente 2: " << student2.getStudentName() << "/" 
         << student2.getNumTestScores() << "/"
         << student2.getTestScore(2) << endl;

    return(EXIT_SUCCESS);
}
