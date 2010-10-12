#include <iostream>
using namespace std; 

int main() {
   
   const int bufSize = 12;
   
   // int *p = &bufSize;
   // Non può farlo poichè anche il puntatore deve essere dichiarato come
   // puntatore ad un oggetto costante; la dichiarazione di prima avrebbe
   // provocato un errore a tempo di compilazione.

   // Quindi correttamente posso fare:
   const int *p = &bufSize;
   
   // Posso assegnare un oggetto non costante ad un puntatore costante, ma non
   // potrei comunque modificarlo
   int dval = 3;	// oggetto non costante
   p = &dval;		// operazione lecita
   // *p = 10; comporterebbe un errore a tempo di compilazione

   // E' possibile definire un puntatore costante a un oggetto costante o non
   // costante; in questo caso peraltro l'oggetto non costante può essere
   // modificato dereferenziando il puntatore
   int errNumber = 10;
   int *const setErr = &errNumber;
   *setErr = 0;

   // Si può realizzare un puntatore costante a un oggetto costante in questo
   // modo: in questo caso però non è possibile nè cambiare l'oggetto puntato nè
   // l'indirizzo puntato
   const int pi = 10;
   const int *const pi_ptr = &pi;


   return(0);
}
