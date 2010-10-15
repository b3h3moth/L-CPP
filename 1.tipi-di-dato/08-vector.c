#include <iostream>
using namespace std;

#include <vector>

int main() {
	int index;

	// VECTOR 
	// (necessario l'header #include <vector>
	// La classe vector altro non e' che una alternativa all'array predefinito;
	// puo' essere utilizzato con due stili ben definiti:
	// 1) Imitare l'array predefinito;
	// 2) STL.
	
	// (1) Imitare l'array predefinito
	// La somiglianza con l'array e' evidente.
	const int MAX_SIZE = 5;
	
	// Dichiaro un contenitore vector di 10 interi:
	vector<int> vec(MAX_SIZE);
	
	// L'equivalente array predefinito, inizializzato:
	int arr[MAX_SIZE] = {10,20,30,40,50};	
	
	// L'operatore di subscript [] naturalmente e' lecito per accedere agli
	// elementi:
	cout << "Operatore di subscript []" << endl;

	for (index = 0; index < MAX_SIZE; index++) {
		vec[index] = arr[index];
		cout << vec[index] << endl;
	}

	// E' possibile utilizzare alcune funzioni per verificare sia la dimensione
	// sia la possibilita' che sia vuoto, size() ed empty() rispettivamente:
	cout << "size() empty()" << endl;
	
	if (vec.empty())	// Restituisce true se vuoto
		cout << "vec: VUTO" << endl;	
	else
		cout << "vec: caratterizzato da " << vec.size() << " elementi" << endl;

	// Vector e' una classe, pertanto utilizza il proprio costruttore di default
	// per inizializzare ciasun elemento al tipo definito nella dichiarazione -
	// ad esempio, i vector dichiarati di tipo int saranno inizializzati a 0 -;
	// tuttavia e' possibile scavalcare[1] - le note sono a pie' di pagina - il 
	// costruttore di default definendo uno specifico valore per tutti gli 
	// elementi:
	cout << "Oltre il ... costruttore di default" << endl;
	
	vector<int> nvect(MAX_SIZE, 9);

	for (index = 0; index < MAX_SIZE; index++)
		cout << nvect[index] << endl;

	// Un array puo' essere inizializzato contestualmente alla sua dichiarazione
	// mediante costanti, un oggetto vector non puo', tuttavia e' in grado di
	// fare ben altro; un oggetto vector puo' essere inizializzato con tutta o
	// solo una parte di un array.
	//
	// Per far questo, si deve inserire l'indirizzo di partenza da cui iniziare
	// a copiare gli elementi e l'indirizzo successivo all'ultimo elmento da 
	// copiare, con un esempio sara' tutto molto piu' chiaro:
	cout << "Copia di array o parti di esso in un oggetto vector..." << endl;
	
	int iarr[MAX_SIZE+5] = {100,200,300,400,500,600,700,800,900,1000};
	vector<int> ivect(iarr, iarr+5);
	
	for (index=0; index<MAX_SIZE ; index++)
		cout << ivect[index] << endl;

	// L'inervallo puo' anche essere individuato in un sottoinsieme dell'array:
	cout << "...sottoinsieme" << endl;

	vector<int> svect(&iarr[3], &iarr[6]);
	
	for (index=0; index<svect.size() ; index++) // Si noti l'utilizzo di size
		cout << svect[index] << endl;

	// A differenza degli array un oggetto vector  puo':
	// essere inizializzato con un altro vector;
	// essere copiato in un altro vector.
	cout << "Copia e inizializzazione vector -> vector" << endl;

	vector<string> git_rep;
	git_rep.push_back("git@github.com:b3h3moth/L-CPP.git");
	vector<string> repository(git_rep);
	vector<string> new_git_rep;
	new_git_rep = repository;

	for (index=0; index<git_rep.size(); index++) {
		cout << "git_rep:     " << git_rep[index] << endl;
		cout << "repository:  " << repository[index] << endl;
		cout << "new_git_rep: " << new_git_rep[index] << endl;
	}


	return(0);
}

/* NOTE:
 * [1] Al momento si deve ancora affrontare lo studio delle classi, tuttavia 
 * gia' e' stato accennato un futuro concetto fondamentale al fine della
 * comprensione delle classi stesse; nell'esempio ho citato la parola
 * 'scavalcare' in relazione ai costruttori, bene, e' sufficiente per il momento
 * essere a conoscenza che una funzione, pur mantenendo, il medesimo
 * identificativo, puo' essere riscritta utilizzando parametri formali 
 * differenti, nel caso in esame evidentemente la classe vector prevede, oltre
 * al costruttore di default, altri metodi di inizializzazione, sfruttando per
 * l'appunto questa tecnica.
 *
 * Le classi saranno trattare come tipo di dato in questa sezione, ossia in
 * questa directory, e poi utilizzate costantemente in tutte le sorgenti
 * prodotte nel presente repository.
 */
