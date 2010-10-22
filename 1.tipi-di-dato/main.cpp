#include <iostream>
using namespace std;

// Inclusione del file di intestazione della classe
#include "Registro.h"

int main() {

	Registro registroA("C++ Language Programming");
	Registro registroB("Corso di: Object Oriented Programming");
	registroA.MessaggioBenvenuto();
	registroB.MessaggioBenvenuto();

   return(0);
}

/* Per compilare con GCC:
 * g++ main.cpp Registro.cpp -o registro
 */
