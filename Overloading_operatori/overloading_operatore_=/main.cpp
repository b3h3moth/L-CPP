#include <iostream>
#include <cstdlib>
using namespace std;

#include "StudentScore.h"

void print_Student(StudentScore s);

int main() {
    StudentScore student1("John Doe", 7);

    student1.setTestScore(20, 0);
    student1.setTestScore(22, 1);
    student1.setTestScore(24, 2);
    student1.setTestScore(26, 3);
    student1.setTestScore(27, 4);
    student1.setTestScore(28, 5);
    student1.setTestScore(29, 6);

    StudentScore student2(student1);
    
    student2.setStudentName("liuc Suriancic");

    print_Student(student1);
    print_Student(student2);

    return(EXIT_SUCCESS);
}

void print_Student(StudentScore s)
{
    cout << "Nome: " << s.getStudentName() << endl; 
    cout << "Punteggio test: ";

    for(int i=0; i<s.getNumTestScores(); i++)
        cout << s.getTestScore(i) << " ";
    cout << endl;
}
