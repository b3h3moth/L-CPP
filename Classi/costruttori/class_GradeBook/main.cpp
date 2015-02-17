#include "GradeBook.h"

int main() {
	int gradesArray[GradeBook::students] = {87,68,94,100,83,78,85,91,76,87};
	GradeBook oggetto("C++01 Programming", gradesArray);
	oggetto.displayMessage();
	oggetto.processGrades();

	return(0);
}
