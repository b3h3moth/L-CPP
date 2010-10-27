#include <iostream>
using namespace std;

#include <vector>
#include <list>
#include <map>
#include <iterator>

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
	 *
	 * Un vector e' una sequenza che supporta accessi random agli elementi, la
	 * gestione della memoria e' automatica; il tempo per inserire o cancellare
	 * ciascun elemento dalla fine della sequenza e' costante, mentre e' lineare
	 * se l'inserimento o la cancellazione di un elemento avviene all'inizio o
	 * nel mezzo della sequenza stessa. 
	 *
	 * Il numero degli elementi in un vector puo' variare dinamicamente.
	 

	 * Se si volesse banalizzare il concetto, o meglio, se si volesse rendere
	 * il discorso molto piu' semplice, nulla risulterebbe errato se si
	 * definisse la classe vector come una alternativa molto efficiente 
	 * all'array predefinito.
	 *
	 * Un vector puo' essere implementato mediante due stili ben definiti:
	 * 1) Imitando l'array predefinito;
	 * 2) Utilizzando lo stile e la tecnica propria della STL.
	 *
	 * Saranno analizzati entrambi.
	 */
	
	const int MAX_SIZE = 5;
	
// (1) Implementare un vector imitando l'array predefinito
	// La somiglianza con l'array e' evidente.
	
	// Dichiaro un contenitore vector di 10 interi:
	vector<int> vec(MAX_SIZE);
	
	// L'equivalente array predefinito, inizializzato:
	int arr[MAX_SIZE] = {10,20,30,40,50};	
	
	// L'operatore di subscript [] naturalmente e' lecito per accedere agli
	// elementi:
	cout << " ### Operatore di subscript []" << endl;

	for (index = 0; index < MAX_SIZE; index++) {
		vec[index] = arr[index];
		cout << vec[index] << endl;
	}

	// E' possibile utilizzare alcune funzioni per verificare sia la dimensione
	// sia la possibilita' che sia vuoto, size() ed empty() rispettivamente:
	cout << "\n ### size() empty()" << endl;
	
	if (vec.empty())	// Restituisce true se vuoto
		cout << "vec: VUOTO" << endl;	
	else
		cout << "vec: caratterizzato da " << vec.size() << " elementi" << endl;

	// Vector e' una classe, pertanto utilizza il proprio costruttore di default
	// per inizializzare ciasun elemento al tipo definito nella dichiarazione -
	// ad esempio, i vector dichiarati di tipo int saranno inizializzati a 0 -;
	// tuttavia e' possibile scavalcare[1] - le note sono a pie' di pagina - il 
	// costruttore di default definendo uno specifico valore per tutti gli 
	// elementi:
	cout << "\n ### Oltre il ... costruttore di default" << endl;
	
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
	cout << "\n ### Copia di array o parti di esso in un oggetto vector..." <<
		endl;
	
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
	
// (2) Implementare un vector secondo lo stile proprio della STL
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
	cout << "\n ### Stile STL: iterazione mediante subscript" << endl;

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
	cout << "\n ### iterazione mediante classe iterator" << endl;

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
	cout << "\n ### vector size()" << endl;

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
	 * E' una lista doppiamente concatenata, bidirezionale, ciascun nodo e' 
	 * allocato automaticamente ed ha a disposizione 2 puntatori, uno che 
	 * punta al nodo precedente l'altro che punta al nodo successivo; 
	 * e' possibile inserire ed eliminare elementi molto velocemente, cosi' 
	 * come scorrere l'intera lista.
	 */
	cout << "\n ### list<int> LISTA;" << endl;

	list<int> LISTA;

	LISTA.push_back(100);			// Aggiunto alla fine
	LISTA.push_front(10);			// Aggiunto all'inizio
	LISTA.insert(LISTA.begin(), 2);	// Aggiunto all'inizio
	LISTA.insert(LISTA.end(), 33);	// Aggiunto alla fine
	LISTA.push_back(80);			// Aggiunto alla fine	
	LISTA.push_back(90);			// Aggiunto alla fine
	// Aggiunto all'inizio dopo 1 elemento, diventa secondo della lista
	LISTA.insert(++LISTA.begin(), 44);	
	// Aggiunto 1 elemento dopo la fine, ovvero diventa primo
	LISTA.insert(++LISTA.end(), 55);

	list<int>::iterator i;

	for(i = LISTA.begin(); i != LISTA.end(); ++i)
		cout << *i << " ";
	cout << endl;

	cout << "\n### Lista.size(): " << LISTA.size() << endl;

	/*
	 * MAP
	 *
	 * Intestazione da includere:
	 * #include <map>
	 *
	 * E' un container associativo ordinato, in cui possono essere posti in
	 * relazione due tipi di dato diversi, detto ancor piu' semplicemente e' un
	 * contenitore di coppie di valori.
	 */
	cout << "\n### map<int, string> MAP" << endl;

	map<int, string> MAP;

	// Si utilizza l'operatore di subscript e l'operatore di assegnamento per
	// creare la relazione tra, in questo caso, un tipo int e un tipo string;
	// non e' necessario inserirli in un ordine prestabilito.
	MAP[123567] = "C++";
	MAP[678677] = "C";
	MAP[789435] = "Perl";
	MAP[291878] = "Python";
	MAP[298327] = "Lisp";
	MAP[123478] = "Unix Shell Scripting";

	cout << "MAP[123567]: " << MAP[123567] << endl;
	cout << "MAP.size() : " << MAP.size() << endl;

	map<int, string>::iterator iter;
	for(iter = MAP.begin(); iter != MAP.end(); iter++)
		cout << (*iter).first << " -> " << (*iter).second << endl;

	return(0);
}

/* NOTE:
 *
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
 * inclusa nella libreria standard del C++, con la peculiarita' che possono
 * essere gestite con ogni tipo di tapo; e' importantissimo ed essenziale
 * per un programmatore C++ sfruttare a fondo tale libreria.
 */
