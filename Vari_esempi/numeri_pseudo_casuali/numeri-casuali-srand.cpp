#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {
	// il seme
	unsigned seed;

	cout << "Enter seed: " ;
	cin >> seed;
	
	// Genera un numero casuale utilizzando il seme inserito dall'utente
	srand(seed);
	// Se si vuole randomizzare in "automatico", ossia senza dover inserire
	// ogni volta un seme, si può utilizzare la funzione time(), che fornisce
	// il numero di secondi trascorsi dal 1 gennaio 1970 e li converte in
	// un unsigned int, per cui si otterrà un seme sempre diverso.
	// srand(time(0));

	for (int counter = 1; counter <= 10; counter++)
	{
		// genera numero casuale tra 1 e 6 e lo visualizza
		cout << setw(10) << (1 + rand() % 6);

		if (counter % 5 == 0)
			cout << endl;
	}

	
	return(0);
}

