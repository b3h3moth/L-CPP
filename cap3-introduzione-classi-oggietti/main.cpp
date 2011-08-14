#include "GradeBook.h"

int main() {
	GradeBook oggetto("Linguaggi di programmazione");
	GradeBook oggetto1("Ingegneria del software");

	cout << "nome del corso iniziale (1): " << oggetto.getCourseName() << endl;
	cout << "nome del corso iniziale (2): " << oggetto1.getCourseName() << endl;

	return(0);
}

