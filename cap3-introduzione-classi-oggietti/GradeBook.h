#include <iostream>
#include <string>
using namespace std;

// Definizione della classe
class GradeBook
{
	public:
		// Costruttore
		GradeBook(string name);	
		//
		// funzioni membro
		void setCourseName(string name);
		string getCourseName();
		void displayMessage();

	private: // Dati membro, incapsulati nell'oggetto
		string courseName;
};

