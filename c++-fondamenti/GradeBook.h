#include <string>
#include <iostream>
using namespace std;

// Definizione della classe
class GradeBook
{
	public:
		// Costruttore
		GradeBook(string name);	

		// funzioni membro
		void setCourseName(string name);	// Imposta nome corso
		string getCourseName();				// Legge nome corso
		void displayMessage();				// Visualizza msg di benvenuto
		void determineClassAverage();		// Calcola media voti
		void inputGrades();					// Legge tot voti dell'utente
		void displayGradeReport();			// Visualizza sommario voti

	private: // Dati membro, incapsulati nell'oggetto
		string courseName;	// nome del corso
		int aCount;			// somma dei voti A
		int bCount;			// somma dei voti B
		int cCount;			// somma dei voti C
		int dCount;			// somma dei voti D
		int fCount;			// somma dei voti F
};

