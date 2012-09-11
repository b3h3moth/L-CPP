#include <iostream>
using namespace std;

int main() {
	// PUNTATORE
	// Un puntatore contiene l'indirizzo di un altro oggetto; la differenza tra
	// puntatori sta nell'oggetto puntato e non nel tipo di puntatore, ora 
	// alcune regole da tenere bene a mente:
	// - Un puntatore non puo' puntare ad un oggetto di un altro tipo di dato,
	// tuttavia, mediante il puntatore speciale *void, questa regola puo'
	// essere in un certo senso 'superata';
	// - il puntatore *void indica un indirizzo, ma il tipo dell'oggetto di
	// quell'indirizzo non e' conosciuto; con *void non si puo' operare ma 
	// solo memorizzazione e confronto di indirizzi;
	
	// - Un puntatore inizializzato a 0 sta ad indicare che non punta a nulla;
	// - * operatore di dereference - dereferenza;
	// - & operatore indirizzo.
	
	// ptr e' un puntatore ad intero.
	int *ptr;
	
	// ptr non punta ad alcun oggetto
	ptr = 0;
	
	int val = 1024, val2 = 2048;
	
	// p punta a val, ovvero p contiene l'indirizzo della variabile intera val;
	// l'indirizzo e' ottenuto mediante l'operatore di indirizzo per l'appunto.
	int *p = &val;
	
	*p = val2; // dereferenzio *p
	int **ppi = &p;
	int *p2 = *ppi; // dereferenzio *p2
	
	
	cout << "Il valore di val\n"
      << "valore diretto: " << val << " \n"
      << "valore  indiretto: " << *p << "\n"
      << "valore doppiamente indiretto: " << **ppi 
      << endl;

	return(0);
}

