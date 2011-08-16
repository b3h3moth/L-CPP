#include <iomanip>
#include <iostream>
#include "GradeBook.h"
using namespace std;

// Costruttore
GradeBook::GradeBook(string name)
{
	setCourseName(name);
	aCount = bCount = cCount = dCount = fCount = 0;
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
	int grade;

	cout << "Enter the letter grades (EOF to quit) " << endl;

	// Dovrebbe essere inserito EOF, ma non compila; momentaneamente pertanto
	// si inserisce l'intero negativo -1, che dovrebbe corrispondere ad EOF
	while ( (grade = cin.get()) != 'x')
	{
		switch(grade)
		{
			case 'A': 
			case 'a':
				aCount++;
				break;
			case 'B': 
			case 'b':
				bCount++;
				break;
			case 'C': 
			case 'c':
				cCount++;
				break;
			case 'D': 
			case 'd':
				dCount++;
				break;
			case 'F': 
			case 'f':
				fCount++;
				break;
			case '\n':
			case '\t':
			case  ' ':
				break;
			default:
				cout << "Incorrect letter grade.\nEnter a new grade" << endl;
				break;
		}
	}
}

void GradeBook::displayGradeReport()
{
	cout << "\nNumber of students who received each letter grade: "
		<< "\nA: " << setw(4) << aCount
		<< "\nB: " << setw(4) << bCount
		<< "\nC: " << setw(4) << cCount
		<< "\nD: " << setw(4) << dCount
		<< "\nF: " << setw(4) << fCount << endl;
}
