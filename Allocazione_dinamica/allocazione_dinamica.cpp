#include <iostream>
using namespace std;

int main() {
    /* L'allocazione dinamica della memoria si realizza mediante l'operatore
    'new', che alloca un oggetto sulla memoria heap, e restituisce un puntatore
    all'ggetto al quale e' stata assegnata la memoria.
    
    Allocare memoria non vuol dire inizializzare, sono due concetti diversi; 
    l'inizializzazione dell'oggetto puo' essere contestuale alla dichiarazione 
    oppure puo' essere fatta successivamente. */
    
    // Si alloca la memoria necessaria per contenere un oggetto di tipo intero
    int *elem = new int;		

    // Si alloca un intero e lo e si inizializza contestualmente
    int *elem2 = new int(1024);
    
    // Allocazione di un array, ma non inizializzazione
    int *array = new int[10];
    
    // Si alloca e si inizializza una "stringa"
    string *stringa = new string("C++ Programming");
    
    cout << "Valore e indirizzo di ciascun elemento dell'array: " << endl;
    int i;
    for (i=0; i<10; i++) {
    	array[i] = i * i;
	cout << i << ": " << array[i] << " " << &array[i] << endl;
    }
    
    cout << "&array[0]: " << &array[0] << " Indirizzo iniziale" << endl;
    cout << "&array[9]: " << &array[9] << " Indirizzo finale" << endl;
    cout << "    array: " << array << " Indirizzo iniziale" << endl;
    cout << "  stringa: " << stringa << endl;
    cout << " *stringa: " << *stringa << endl;
    cout << "    elem2: " << elem2 << endl;
    cout << "   *elem2: " << *elem2 << endl;
    cout << "     elem: " << elem << endl;
    
    // Non e' inizializzato, per cui il risultato sara' 0
    cout << "    *elem: " << *elem << endl;
    
    // Si rilascia lo spazio di memoria allocato per ciascun elemento
    delete stringa;
    delete elem;
    delete elem2;
    delete [] array;
    
    return(0);
}
