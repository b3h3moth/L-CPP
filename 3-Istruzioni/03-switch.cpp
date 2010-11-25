#include <iostream>
using namespace std;

int main() {
	
	// SWITCH
	// Consente un metodo alternativo alle clausole if-else per la scelta di una
	// opzione tra una serie di opzioni.
	//
	// Sintassi:
	//
	// switch (expr)
	// 	statement
	//
	// Le caratteristiche di implementazione:
	//
	// - La parola chiave switch e' seguita tra parentesi da un'espressione che
	// dovra' essere valutata;
	//
	// - Valutata l'espressione vi e' un insieme di case (etichette), ciascuna
	// delle quali seguita da una espressione costante di tipo intero, che
	// posta a confronto con il risultato dell'espressione dello switch;
	//
	// - Ciascun case si chiude con i due punti ":".
	//
	// - Le etichette possono essere associate;
	//
	// - L'etichetta finale, opzionale ma raccomandata, e' definita come
	// etichetta di default, ovvero se nessuna delle etichette coincide con 
	// l'espressione dello switch, essa sara' eseguita;
	//
	// - Sara' errore a tempo di compilazione qualora due etichette abbiano lo
	// stesso valore.
	//
	// - Si ponga particolare attenzione alla terminazione di ciascun case,
	// utilizzando un break o un return, per evitare l'esecuzione a cascata di
	// tutte le etichette; e' compito del programmatore far terminare lo
	// switch.
	// 
	// Il risultato della espressione switch sara' confrontato con ogni valore
	// associato alle etichette, qualora si trovi corrispondenza tra
	// l'espressione stessa e un valore del case, sara' eseguita la prima
	// istruzione subito dopo il valore del case; se invece non risulta
	// corrispondenza si esegue la prima istruzione dell'etichetta di default,
	// se inserita.
	//
	// Da notare che un'istruzione switch, se ben congeniata, potra' sempre
	// essere trasformata in un gruppo di istruzione if; con essere ben
	// congeniata s'intende sia sintatticamente sia logicamente corretta:
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
	// Pertanto, l'istruzione break fa terminare l'esecuzione della switch ed il
	// controllo passa immediatamente alla prima istruzione subito dopo la
	// parentesi graffa finale.

	
	return(0);
}

