#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>
#include <iostream>
using namespace std;

// Definizione della classe
class GradeBook
{
public:
  // Studenti iscrtitti al corso
  const static int students = 10;

  // Costruttore
    GradeBook (string name, const int gradesArray[]);

  // funzioni membro
  void setCourseName (string name);	// Imposta nome corso
  string getCourseName ();	// Legge nome corso
  void displayMessage ();	// Visualizza msg di benvenuto
  void processGrades ();	// Elaborazioni sui dati
  int getMinimum ();		// Trova il minimo
  int getMaximum ();		// Trova il massimo
  double getAverage ();		// Determina media voti
  void outputBarChart ();	// Visualizza istogramma dei voti
  void outputGrades ();		// Visualizza tutti i voti

private:			// Dati membro, incapsulati nell'oggetto
    string courseName;		// nome del corso
  int grades[students];		// Array voti studenti
};

#endif
