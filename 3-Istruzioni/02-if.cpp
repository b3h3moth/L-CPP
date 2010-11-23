#include <iostream>
#include <vector>
using namespace std;

#define MAX_VEC_SIZE 20

int SearchMin(const vector<int>&vec_elem, int &occurs);

int main() {

	// L'istruzione if, in base alla verita' di una espressione logica, consente
	// l'esecuzione condizionale di una istruzione o di un blocco di istruzioni;
	// la sintassi e' la seguente:
	//
	// if ( condizione )
	//      istruzione/i;
	//
	// - La condizione deve essere sempre racchiusa tra parentesi tonde;
	// - La condizione puo' essere una espressione "if (x + y > N)";
	// - La condizione puo' essere una dichiarazione "if ( val = get_value() )";
	// - L'oggetto o gli oggetti definiti all'interno della condizione hanno il
	// il proprio ambito di visibilita', pertanto sono visibili solo all'interno
	// del blocco associato.
	
	if ( int valore = 10 > 0) {
		cout << true << endl;
	}
	// valore++; 
	// tale istruzione sarebbe stata un errore, poiche' lo scope e' limitato
	// all'ambito del blocco if

	// Il comportamento dell'istruzione if e' ora illustrato mediante
	// l'implementazione della funzione SearchMin, il cui compito e' di
	// restituire il valore del minore tra MAX_VEC_SIZE elementi interi di
	// tipo vector, inoltre sono contate le occorrenze di tale intero
	// all'interno del vector stesso.
	cout << "Verifica occorrenze e calcola minimo" << endl;

	// Array con gli elementi necessari per il vector
	int ia[MAX_VEC_SIZE] = {1,9,1,4,1,2,1,4,8,2,1,4,2,1,1,3,8,8,4,1};

	// Si inizializza il vector mediante l'array precedentemente creato
	vector<int> vec_elem(ia, ia+MAX_VEC_SIZE);

	// Le occorrenze
	int occurs = 0;

	// Inizializzazione dell'elemento minore all'interno della sequenza
	int minVal = SearchMin(vec_elem, occurs);
	
	cout << "Valore minimo: " << minVal << endl;
	cout << "   Occorrenze: " << occurs << endl;	
	
	return(0);
}

int SearchMin(const vector<int>&vec_elem, int &occurs)
{
	// Si assegna a minVal il valore del primo elemento del vector
	int minVal = vec_elem[0];
	// Si quantifica l'ampiezza del vector
	int size = vec_elem.size();
	// Le occorrenze sono impostate di default ad uno.
	occurs = 1;

	// La forma dell'istruzione:
	//
	// if (condizione)
	// 		istruzione1
	// else
	// 		istruzione2
	// 
	// Se condizione risulta vera, e' eseguita istruzione1, alrimenti e'
	// eseguita istruzione2; come si evince dalla funzione possono cosistere
	// diversi rami in cui possono essere inserite a cascata ulteriori 
	// condizioni.

	for (int i=1; i<size; ++i) {
		// Verifica l'occorrenza di ciascun numero
		if ( minVal == vec_elem[i] )
			++occurs;
		// Se il valore attuale di minVal risulta essere maggiore del valore
		// contenuto nell'elemento vec_elem[i], allora minVal e' impostato con
		// il nuovo valore e l'occorrenza riportata ad uno.
		else if ( minVal > vec_elem[i] ) {
			minVal = vec_elem[i];
			occurs = 1;
		}
	}

	return minVal;
}
