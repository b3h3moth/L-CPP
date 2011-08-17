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
		int maximum(int x, int y, int z);	// Il massimo di 3 valori

	private: // Dati membro, incapsulati nell'oggetto
		string courseName;	// nome del corso
		int maximumGrade;	// Massimo dei 3 valori	
};
