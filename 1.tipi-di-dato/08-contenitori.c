#include <iostream>
using namespace std;

#include <vector>
#include <list>
#include <map>

// CONTENITORI (Container)
// Sono classi che possono contenere gruppi eterogenei di oggetti.
//
// Saranno esaminati:
// Vector
// List
// Map

int main() {
	int index;

	/*
	 * VECTOR
	 *
	 * Intestazione da aggiungere:
	 * #include <vector>
	 */
	// La classe vector altro non e' che una alternativa all'array predefinito;
	// puo' essere utilizzato con due stili ben definiti:
	// 1) Imitare l'array predefinito;
	// 2) STL.
	
	const int MAX_SIZE = 5;
	
	// (1) Imitare l'array predefinito
	// La somiglianza con l'array e' evidente.
	
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

	// A differenza degli array un oggetto vector puo':
	// essere inizializzato con un altro vector;
	// essere copiato in un altro vector.
	
	// STILE STL
	// Sino ad'ora si e' utilizzato il contenitore vector simulando l'array
	// predefinito, ora si considerera' invece lo stile STL[2], che prevede, al
	// posto della definizione di una dimensione come per gli array, la 
	// creazione di un vector vuoto.

	vector<string> git_rep;

	// Invece di indicizzare l'oggetto vector, si inserisce direttamente un
	// elemento, questa operazione la si puo'  fare con push_back(), che per
	// l'appunto inserisce un elemento alla fine di un vector:
	git_rep.push_back("git@github.com:b3h3moth/L-CPP.git");

	vector<string> repository(git_rep); // vector inizializzato con vector
	vector<string> new_git_rep;			
	new_git_rep = repository;			// copia un vector in un altro vector

	// Per visualizzare le stringhe all'interno dei relativi vector si potrebbe
	// tranquillamante iterare i vari elementi mediante l'operatore di 
	// subscript, (si potrebbe definire come il metodo classico):
	cout << "Stile STL: iterazione mediante subscript" << endl;

	for (index=0; index<git_rep.size(); index++) {
		cout << "     git_rep: " << git_rep[index] << endl;
		cout << "  repository: " << repository[index] << endl;
		cout << " new_git_rep: " << new_git_rep[index] << endl;
	}

	// Tuttavia e' possibile anche utilizzare gli iteratori restituiti dalle
	// funzioni begin() ed end() di vector, (si potrebbe definire il metodo
	// standard o consigliato); un iteratore e' una classe della libreria
	// standard, fornisce all'oggetto creato - nel caso specifico it - le 
	// funzionalita' di un puntatore:
	cout << "iterazione mediante classe iterator" << endl;

	vector<string>::iterator it = git_rep.begin();
	
	for ( it; it != git_rep.end(); it++)
		cout << *it << ' ';
	cout << endl;

	// PORRE ATTENZIONE A:
	// 
	// 1) Non confondere i due stili, ossia quello che simula gli array
	// predefiniti e quello STL, il primo prevede la dimensione iniziale e di
	// seguito, o contestualmente, il riempimento degli elementi, il secondo
	// invece prevede la definizione di un vector vuoto, per poi lavorarlo con
	// le le funzioni predefinite della classe stessa. Se vogliamo il secondo
	// metodo e' di gran lunga piu' vicino alla programmazione ad oggetti,
	// concettualmente s'intende.
	//
	// 2) Si tenga bene a mente che l'inserimento in un vector non sovrascrive
	// ma aggiunge, per cui vale sempre la pena considerare sempre il
	// numero degli elementi allorquando si lavora con un vector:
	
	vector<int> mvect(MAX_SIZE);
	
	cout << mvect.size() << endl;
	
	for (index = 0; index < MAX_SIZE; index++)
		mvect.push_back(index);

	cout << mvect.size() << endl;

	/*
	 * LIST
	 * 
	 * Intestazione da aggiungere:
	 * #include <list>
	 *
	 * Ricerca bidirezionale
	 */


	list<string> indirizzi_mail;

	/*
	 * MAP
	 *
	 * Intestazione da includere:
	 * #include <map>
	 */
	map<string, int> rubrica;
	rubrica["Marilena"];
	cout << rubrica[0] << endl;

	return(0);
}

/* NOTE:
 * [1] Al momento si deve ancora affrontare lo studio delle classi, tuttavia 
 * gia' e' stato accennato un futuro concetto fondamentale al fine della
 * comprensione delle classi stesse; nell'esempio e' stata citata la parola
 * 'scavalcare' in relazione ai costruttori, bene, e' sufficiente per il momento
 * essere a conoscenza che una funzione, pur mantenendo, il medesimo
 * identificativo, puo' essere riscritta utilizzando parametri formali 
 * differenti, nel caso in esame evidentemente la classe vector prevede, oltre
 * al costruttore di default, altri metodi di inizializzazione, sfruttando per
 * l'appunto questa tecnica.
 *
 * Le classi saranno trattate come tipo di dato in questa sezione in maniera
 * molto generica, ma quanto basta per poter proseguire con lo studio delle
 * sezioni successive.
 *
 * [2] STL sta per Standard Template Library; sono una collezione di classi
 * inclusa nella libreria standard del C++, con la peculiorita' che possono
 * essere gestite con ogni tipo di tapo.
 */
