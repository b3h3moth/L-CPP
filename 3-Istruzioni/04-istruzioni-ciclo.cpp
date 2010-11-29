#include <iostream>
#include <vector>
#include <ctype.h>

using namespace std;

#define MAX_ARR 15

int main() {

	// INTRODUZIONE ALLE ISTRUZIONI CICLO: FOR, WHILE, DO WHILE
	////////////////////////////////////////////////////////////////////////////
	// Nei programmi e' sovente utilizzare un insieme ripetuto di istruzioni
	// fintanto che talune condizioni restano logicamente vere (true); il
	// linguaggio C++ fornisce tre istruzioni di ciclo:
	// 
	// 1 - Il ciclo for;
	// 2 - Il ciclo while;
	// 3 - Il ciclo do while.
	//
	// Il ciclo for e il ciclo while iniziano l'esecuzione con una condizione
	// di partenza che determina se eseguire o meno l'istruzione o il blocco di
	// istruzioni contenute nel blocco del ciclo, qualora la condizione 
	// risultasse falsa l'istruzione o il blocco di istruzioni non sarebbe 
	// eseguito neanche una volta.
	//
	// Il ciclo do while invece garantisce che l'istruzione o il blocco di
	// istruzioni sia eseguito per lo meno una volta, poiche' la condizione e'
	// esaminata dopo l'esecuzione del ciclo stesso. Questa, e' una differenza
	// sostanziale e molto importante allorquando si dovra' decidere quale ciclo
	// utilizzare.
	
	
	// CICLO FOR
	////////////////////////////////////////////////////////////////////////////
	// E' pensato per esprimere cicli piuttosto regolari, e' adoperato infatti
	// per scandire una struttura dati di lunghezza fissa, quali possono essere
	// un array o un vector. La sintassi e' la seguente:
	//
	// for (inizializzazione; condizione; espressione)
	// 		istruzione
	// 
	// Logicamente dovrebbe produrre il seguente risultato: "inserire un
	// contatore, verificare una condizione, aggiornare il contatore".
	//
	// L'inizializzazione serve per fornire un valore iniziale che
	// successivamente sara' incrementato; la caratteristica della condizione
	// invece e' di lavorare sul controllo del ciclo, tale condizione se risulta
	// essere true consente l'esecuzione dell'istruzione o del blocco di 
	// istruzioni, qualora la condizione risultasse falsa, non sara' eseguita 
	// alcuna istruzione. Infine, l'espressione e' valutata alla conclusione di
	// ciascun ciclo, generalmente utilizzata per la modifica delle variabili
	// predisposte all'inizializzazione.

	cout << "Ciclo for con array" << endl;
	
	int int_arr[MAX_ARR], i;

	// La variabile intera i rappresenta il contatore, nel caso specifico posto
	// uguale a 0; si inizializza un array di MAX_ARR elementi con il valore del
	// contatore i.

	for (i = 0; i <MAX_ARR; i++) {
		int_arr[i] = i;
		cout << int_arr[i] << " " ;
	}

	cout << "\nCiclo for con vector" << endl;

	vector<int> int_vect(int_arr, int_arr + MAX_ARR);
	vector<int>::iterator it = int_vect.begin();

	// Si cicla fino all'ultimo ell'elemento del vector mediante un iteratore,
	// dopodiche' si inizializzano gli elementi. Da notare che se non serve 
	// l'inizializzazione puo' essere omessa.
	
	for (  ; it != int_vect.end(); ++it)
		cout << (*it += *it) << " " ;

	// Attenzione, una variabile definita nella condizione del ciclo for ha
	// ambito di visibilita' limitato al for stesso.

	// CICLO WHILE
	////////////////////////////////////////////////////////////////////////////
	// Il ciclo while e' particolarmente adatto ad eseguire istruzioni fino a
	// quando talune condizioni sono verificate, l'esempio classico e' la
	// lettura di un file fino a quando non si giunge alla fine del file
	// stesso.
	//
	// La sintassi del ciclo while e' la seguente:
	//
	// while (condizione)
	// 	istruzione
	//
	// Fintanto che la condizione risulta vera sara' eseguita l'istruzione o il
	// blocco di istruzioni, qualora invece la condizione risultasse falsa il 
	// ciclo non sara' eseguito neanche una volta.
	//
	// Un'istruzione while esegue semplicemente il corpo del ciclo, finche' la
	// condizione non diventa falsa, tecnicamente ed anche logicamente e' molto
	// piu' semplice di un ciclo for; le istruzioni while dovrebbero essere
	// preferite alle istruzioni for allorquando non esiste un contatore ovvio,
	// o quando l'aggiornamento del contatore viene naturale all'interno del
	// corpo del ciclo.
	// 
	// La condizione puo' essere sia una espressione sia una definizione di
	// inizializzazione.
	cout << "Ciclo while" << endl;
	
	bool testing = false;
	char ch = '/';

	// In questo caso la condizione e' una espressione
	while (!testing) {
		cout << "\"!\" posto davanti ad una condizione ne esprime la negazione; " 
			    "e' necessario il break altrimenti il ciclo sarebbe infinito." << endl;
		break;
	}

	// In quest'altro caso invece la condizione e' una definizione di
	// inizializzazione. Il break non e' stato inserito poiche' la condizione
	// risulta falsa, poche' il carattere non e' un alfanumerico, come la 
	// condizione vorrebbe.

	while ( int valore = isalpha(ch)) {
		cout << ch << endl;
	}
	
	// CICLO DO WHILE
	////////////////////////////////////////////////////////////////////////////
	// Come accennato precedentemente il corpo del ciclo do while e' eseguito
	// per lo meno una volta prima della verifica della condizione, e questo
	// puo' essere causa di errori seri qualora il programmatore non faccia
	// attenzione.
	//
	// La sintassi e' la seguente:
	//
	// do
	// 		istruzione
	// while (espressione);
	//
	// Si esegue anzitutto istruzione, dopodiche' se espressione risulta
	// essere vera per una determinata condizione, e' eseguito il corpo del
	// ciclo. 
	cout << "Istruzione ciclo do while" << endl;

	int contatore = 1;

	// Si propone il seguente codice per verificare se effettivamente il corpo
	// del ciclo e' eseguito prima dell'istruzione while; il break e' necessario
	// altrimenti il codice andrebbe in loop infinito, in questi casi per
	// interrompere l'esecuzione si digita la combinazioni di tasti ^Cc, forma
	// abbreviata di Control+c.
	
	do {
		cout << contatore++ << endl;
		break;
	} while (contatore <= 5);

	// ISTRUZIONI BREAK E CONTINUE
	////////////////////////////////////////////////////////////////////////////
	// L'istruzione break termina l'esecuzione di un ciclo for, while, do-while
	// e dell'istruzione condizionale switch; l'esecuzione ricomincia dalla
	// prima istruzione immediatamente successiva rispetto a quelle citate.
	//
	// Da notare che se l'istruzione if non fosse stata inserita nel blocco del
	// ciclo for sarebbe stato errore, il compilatore non avrebbe compilato, per
	// cui si ponga particolare attenzione a questa caratteristica.
	//
	// Infine, qualora ci si trovi con due istruzioni di ciclo nidificate,
	// l'istruzione break sarebbe valida solo per quella piu' interna.
	//
	// L'istruzione continue e' equivalente ad un salto di un ciclo, in pratica
	// salta le restanti istruzioni, qualora ci siano, e passa alla iterazione
	// successiva.
	cout << "Istruzione break" << endl;

	int arr[MAX_ARR] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int search_num = 8;
	int x,y;

	// Si ricerca un valore all'interno di un array, non appena individuato gli
	// si assegna un nuovo valore e il ciclo termina; da notare che l'istruzione
	// condizionale if seguita da un break e' valida solo perche' essa e'
	// all'interno di un ciclo for, altrimenti, come accennato pocanzi, sarebbe
	// stato errore.
	
	for (x=0; x<MAX_ARR; x++) {
		cout << arr[x] << endl;
		if (arr[x] == search_num) {
			cout << "stop" << endl;
			arr[x] = 0;
			break;
		}
	}

	// Si propone lo stesso codice proprio per evidenziare le differenze, 
	// naturalmente al posto dell'istruzione break vi e' l'istruzione continue. 
	//
	// Si cerca un valore nell'array e quando risulta una corrispondenza,
	// mediante l'istruzione continue, si saltano le restanti istruzioni
	// dell'iterazione, contrassegnate con #1 e #2, passando direttamente ad una
	// nuova iterazione.
	//
	// Come si puo' notare anche dall'output del ciclo precedente, l'array
	// corrispindente a search_num e' stato modificato con il valore 0, in
	// questo caso invece non ci sara' nessuna modifica, proprio grazie al
	// continue che fara' letteralmente saltare quella istruzione, ed altre.
	cout << "Istruzione continue" << endl;

	for (y=0; y<MAX_ARR; y++) {
		cout << arr[y] << endl;
		if (arr[y] == search_num) {
			continue;
			cout << "stop" << endl; // #1
			arr[y] = 9;				// #2
		}
	}

	return(0);
}
