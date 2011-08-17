#include <iomanip>
#include <iostream>
#include "GradeBook.h"
using namespace std;

// Costruttore
GradeBook::GradeBook(string name)
{
	setCourseName(name);
	maximumGrade = 0;
}
		
// funzioni membro
void GradeBook::setCourseName(string name)
{
	if (name.length() <= 25)
		courseName = name;
	else
	{
		courseName = name.substr(0,25);

		cout << "Name: \"" << name << "\" exceeds maximum lenth (25)\n" << endl;
	}
}

string GradeBook::getCourseName()
{
	return courseName;
}

void GradeBook::displayMessage()
{
	cout << "Benvenuto a: " << getCourseName() << endl;
}

void GradeBook::determineClassAverage()
{
	int total;
	int gradeCounter;
	int grade;
	double average;

	total = 0;
	gradeCounter = 0;

	cout << "Enter grade or (-1) to quit: ";
	cin >> grade ;

	// Si utilizza un valore sentinella per uscire dal ciclo
	while (grade != -1)
	{
		total += grade;
		++gradeCounter;
		cout << "Enter grade or (-1) to quit: ";
		cin  >> grade;
	}

	if (gradeCounter != 0)
	{
		average = static_cast<double>(total) / gradeCounter;
		cout << "Total of all " << gradeCounter << " grades entered is "
			<< total << endl;
		cout << "Class average is: " << setprecision(2) << fixed 
			<< average << endl;
	}
	else
		cout << "No grades were entered " << endl;

}

void GradeBook::inputGrades()
{
	int grade1, grade2, grade3;

	cout << "Enter three integer grades: " << endl;
	cin >> grade1 >> grade2 >> grade3;

	maximumGrade = maximum(grade1, grade2, grade3);
}

void GradeBook::displayGradeReport()
{
	cout << "Maximum of grades entered; " << maximumGrade << endl;
}

int GradeBook::maximum(int x, int y, int z)
{
	int maximumValue = x;

	if (y > maximumValue)
		maximumValue = y;

	if (z > maximumValue)
		maximumValue = z;

	return maximumValue;
}
