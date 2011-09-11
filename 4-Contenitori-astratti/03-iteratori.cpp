#include <iostream>
using namespace std;
#include <vector>

int main() {

	// ITERATORI
	////////////////////////////////////////////////////////////////////////////
	// Forniscono un metodo per accedere in successione, ossia uno dopo l'altro,
	// ad ogni elemento di un contenitore associativo o sequenziale.
	//
	// Nota: Ciascun contenitore fornisce un metodo begin() ed un metodo end(),
	// accesso al primo e all'ultimo elemento di un contenitore rispettivamente.

	cout << "iteratore" << endl;
	vector<int> int_vector;

	// Si riempie il vetore con 10 interi
	for( int i=0; i<10; i++)
		int_vector.push_back(i);

	// iterator e' un tipo definito all'interno della classe vector
	vector<int>::iterator iter = int_vector.begin();
	vector<int>::iterator iter_end = int_vector.end();

	// Si utilizza l'iteratore per visualizzare ciascun elemento.
	//
	// Medinate *itesi accede al valore dell'elemento, 
	// Mediante ++iter si fa avanzare l'iteratore verso l'elemento successivo.
	for (; iter != iter_end; ++iter)
		cout << *iter;
	cout << endl;
	// ITERATORI IN SOLA LETTURA AD ELEMENTI COSTANTI
	////////////////////////////////////////////////////////////////////////////
	// Ciascun contenitore, oltre al tipo iterator, implementa il tipo
	// const_iterator, mediante il quale si puo' accedere in sola lettura ed
	// elementi di un contenitore costanti, ossia dichiarati const.

	cout << "const_iterator, accesso ad elementi costanti" << endl;
	
	// Si crea un vector costante, inizializzandolo con gli elementi del vettore
	// precedentemente creato.
	const vector<int> int_vector_2(int_vector);
	
	// Si utilizza, poiche' gli elementi sono costanti, const_iterator
	vector<int>::const_iterator iterc = int_vector_2.begin();
	vector<int>::const_iterator iterc_end = int_vector_2.end();

	for (; iterc != iterc_end; ++iterc)
		cout << *iterc;

	// Da notare che non avrebbe compilato se fosse stato utilizzato il solo 
	// iterator. L'aritmetica degli iteratori e' del tutto simile all'aritmetica
	// dei puntatori.

	return(0);
}
