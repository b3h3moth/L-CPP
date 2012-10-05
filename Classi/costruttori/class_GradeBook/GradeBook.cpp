#include <iomanip>
#include <iostream>
#include <string>
#include "GradeBook.h"
using namespace std;

// Costruttore
GradeBook::GradeBook(string name, const int gradesArray[])
{
	setCourseName(name);
	for (int grade = 0; grade < students; grade++)
		grades[grade] = gradesArray[grade];
}

// funzioni membro
void
 GradeBook::setCourseName(string name)
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

void GradeBook::processGrades()
{
	outputGrades();

	cout << "\nClass average is: " << setprecision(2) << fixed
		<< getAverage() << endl;

	cout << "lowest grade is: " << getMinimum() << "\nHighest grade is: "
		<< getMaximum() << endl;

	outputBarChart();
}

int GradeBook::getMinimum()
{
	// Si assume che il voto più basso possa essere 100
	int lowGrade = 100;

	for (int grade = 0; grade < students; grade++) {
		if (grades[grade] < lowGrade)
			lowGrade = grades[grade];
	}

	return lowGrade;
}

int GradeBook::getMaximum()
{
	// Si assume che il voto più alto possa essere 0
	int highGrade = 0;

	for (int grade = 0; grade < students; grade++) {
		if (grades[grade] > highGrade)
			highGrade = grades[grade];
	}

	return highGrade;
}

double GradeBook::getAverage()
{
	int total = 0;

	for (int grade = 0; grade < students; grade++) {
		total += grades[grade];
	}

	return static_cast < double >(total) / students;
}

void GradeBook::outputBarChart()
{
	int count;
	cout << "\nGrade distribution: " << endl;

	const int frequencySize = 11;
	int frequency[frequencySize] = { 0 };

	for (int grade = 0; grade < students; grade++)
		frequency[grades[grade] / 10]++;

	for (count = 0; count < frequencySize; count++) {
		if (count == 0)
			cout << "  0-9: ";
		else if (count == 10)
			cout << "  100: ";
		else
			cout << count * 10 << "-" << (count * 10) + 9 << ": ";

		for (int stars = 0; stars < frequency[count]; stars++)
			cout << '*';

		cout << endl;
	}
}

void GradeBook::outputGrades()
{
        cout << "\nThe grades are:\n\n";

	for (int student = 0; student < students; student++)
		cout << "Student " << setw(2) << student + 1 << ": " << setw(3)
			<< grades[student] << endl;
}
