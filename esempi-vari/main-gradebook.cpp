#include "GradeBook.h"

int main() {
	GradeBook oggetto("C++01 Programming");
	oggetto.displayMessage();
	oggetto.inputGrades();
	oggetto.displayGradeReport();

	return(0);
}
