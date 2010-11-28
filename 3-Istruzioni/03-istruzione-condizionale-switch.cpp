#include <iostream>
#include <ctype.h>

using namespace std;

int main() {
	
	// ISTRUZIONE CONDIZIONALE SWITCH
	// L'istruzione switch consente un metodo alternativo alle clausole if-else,
	// essa consente di scegliere una tra diverse opzioni definite in fase
	// inmplementativa.
	//
	// Sintassi:
	//
	// switch (expr)
	// 	statement
	//
	// Le caratteristiche implementative e logiche possono essere sintetizzate
	// mediante le seguenti proprieta':
	//
	// - La parola chiave switch e' seguita tra parentesi da un'espressione che
	// dovra' essere valutata;
	//
	// - Valutata l'espressione vi e' un insieme di case (etichette), ciascuna
	// delle quali seguita da una espressione costante di tipo intero, posta a
	// confronto con il risultato dell'espressione dello switch;
	//
	// - Ogni istruzione case si chiude con i due punti ":".
	//
	// - Le etichette possono essere associate;
	//
	// - L'etichetta finale, opzionale ma raccomandata, e' definita come
	// etichetta di default, se nessuna delle etichette coincidera' con 
	// l'espressione dello switch, essa sara' eseguita;
	//
	// - Sara' errore a tempo di compilazione qualora due etichette dovessero
	// avere lo stesso valore.
	//
	// - Si ponga particolare attenzione alla terminazione di ciascun case,
	// utilizzando un break o un return, per evitare l'esecuzione a cascata di
	// tutte le etichette. E' compito del programmatore far terminare lo
	// switch, e se proprio si necessita di una etichetta senza break e' sempre
	// meglio aggiungere un commento per spiegare nel dettaglio la motivazione.
	// 
	// Il risultato della espressione dello switch sara' confrontato con ogni
	// valore associato alle etichette e, qualora si trovi corrispondenza tra
	// l'espressione stessa e un valore del case, sara' eseguita la prima
	// istruzione subito dopo il valore del case, se invece non risultasse
	// corrispondenza sara' eseguita la prima istruzione dell'etichetta di 
	// default, se inserita.
	//
	// Da notare che un'istruzione switch, se ben congeniata, potra' sempre
	// essere trasformata in un gruppo di istruzioni if; con "essere ben
	// congeniata" s'intende sia sintatticamente sia logicamente corretta:
	//
	// switch (expr) {
	// 	case '1':
	// 		istruzione;
	// 		break;
	// 	case '2' :
	// 		istruzione;
	// 		break;
	// 	case 'n';
	// 		isruzione;
	// 		break;
	// 	default:
	// 		istruzione;
	// 		break;
	// }
	//
	// L'istruzione break consente la terminazione dell'esecuzione della switch,
	// dopodichè il controllo passa immediatamente alla prima istruzione subito
	// dopo la parentesi graffa finale.
	//
	// Come esempio si realizza un programma che conta le vocali all'interno di
	// un testo passato in input:
	
	char ch;
	int ch_a = 0, ch_e = 0, ch_i = 0, ch_o = 0, ch_u = 0;
	int ch_consonante = 0;

	while (cin >> ch)
		switch(ch) 
		{
			case 'a': case 'A':
				++ch_a;
				break;
			case 'e': case 'E':
				++ch_e;
				break;
			case 'i': case 'I':
				++ch_i;
				break;
			case 'o': case 'O':
				++ch_o;
				break;
			case 'u': case 'U':
				++ch_u;
				break;
			default:
				if (isalpha(ch))
					++ch_consonante;
				break;
		}

	cout << "    Tot vocale \"a\": " << ch_a << endl;
	cout << "    Tot vocale \"e\": " << ch_e << endl;
	cout << "    Tot vocale \"i\": " << ch_i << endl;
	cout << "    Tot vocale \"o\": " << ch_o << endl;
	cout << "    Tot vocale \"u\": " << ch_u << endl;
	cout << "Tot consonanti \"a\": " << ch_consonante << endl;

	// Compilato ed eseguito con questo listato:
	//
	// $ g++ 03-switch.cpp -o switch
	// ./switch < 03-switch.cpp
	//
	//     Tot vocale "a": 234
	//     Tot vocale "e": 332
	//     Tot vocale "i": 211
	//     Tot vocale "o": 190
	//     Tot vocale "u": 81
	// Tot consonanti "a": 1335

	return(0);
}
