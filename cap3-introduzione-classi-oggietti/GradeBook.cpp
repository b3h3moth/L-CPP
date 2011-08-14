#include "GradeBook.h"

// Costruttore
GradeBook::GradeBook(string name)
{
	setCourseName(name);
}
		
// funzioni membro
void GradeBook::setCourseName(string name)
{
	courseName = name;
}

string GradeBook::getCourseName()
{
	return courseName;
}

void GradeBook::displayMessage()
{
	cout << "Benvenuto a: " << getCourseName() << endl;
}
