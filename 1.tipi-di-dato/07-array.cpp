#include <iostream>
using namespace std;

int main() {
   // ARRAY
   /* Collezione di oggetti dello stesso tipo.
   La dichiarazione prevede un qualificatore di tipo, un identificatore e 
   la dimensione.
   
   int arr[DIM];		Dichiara un array di DIM oggetti interi
   |   |    |
   |   |    |_ Dimensione dell'array
   |   |_ Identificatore	    
   |_ Qualificatore di tipo

   La numerazione degli elementi di un array inizia da 0 e si conclude 
   a DIM-1.

   La dimensione di un array dovrebbe essere dichiarata come un'espressione
   costante, sia lo Stroustrup sia il Lippman asseriscono che se si dichiara la 
   dimensione di un array come non const si avrà un errore a tempo di 
   compilazione.
   */
   const int buf_size = 20;
   int max_buf = 10;

   int buffer[buf_size];			// Lecito, la dimensione è const
   char *input_file[buf_size - 5];	// Lecito, espressione costante 20-5
   double input_str[max_buf];		// Nessun errore a tempo di compilazione

   // Si scandisce un array di 10 elementi, inizializzando ciascuno di essi con
   // il proprio indice, dopodichè si stampa ciascun elemento a video.
   int i;
   const int max_size = 10;
   int arr_int[max_size];

   for(i=0; i<max_size; i++) {
      arr_int[i] = i;
      cout << arr_int[i] << endl;
   }

   // Un array può essere inizializzato contestualmente alla dichiarazione,
   // mediante graffe, peraltro non serve specificare la dimensione poichè sarà
   // il compilatore a determinarla verificando il numero degli elementi.
   int arr_new[] = {1,2,3,4,5};

   // Se la dimensione è specificata ma gli elementi inseriti in fase di
   // inizializzazione sono minori della dimensione stessa, gli elementi
   // rimanenti saranno inizializzati a 0.

   /*
    Un array non può essere inizializzato con un altro array
    Un array non può essere assegnato  a un altro array
    Non si possono dichiarare array di riferimenti
    Per copiare un array in altro array occorre  copiare un elemento per volta
    */

   const int max_arr = 10;
   int arr1[] = {10,20,30,40,50,60,70,80,90,100};
   int arr2[max_arr];

   for (i=0; i<max_arr; i++) {
      arr2[i] = arr1[i];
      cout << "arr1: " << arr1[i] << " _ " << "arr2: " << arr2[i] << endl;
   }

   // ARRAY MULTIDIMENSIONALI

   /* Inizializzazione
    * Sono state utilizzate le graffe annidate per rendere più chiara 
    * l'inizializzazione stessa, tuttavia non sono obbligatorie; ad esempio, la
    * seguente inizializzazione e' del tutto equivalente, infatti produce
	* anch'essa un array a due dimensioni caratterizzato da 3 righe e 2 colonne: 
    * int ia[3][2] ={0,1,2,3,4,5}; 
    */
   const int rowSize = 3;
   const int colSize = 2;
   int arr_multi[rowSize][colSize] = {	
      {0, 1},		
      {2, 3},		
      {4, 5},		
   };
   
   /* Segue l'inizializzazione del primo elemento di ogni riga; gli altri
	* saranno posti automaticamente a 0
    */
   int arr_multi2[rowSize][colSize] = { {0},{1},{2} };

   /* Se non fossero state inserite le graffe sarebbero stati inizializzati i
    * primi 2 elementi della prima riga ed il primo elemento della seconda
    * riga.
	*
	* L'indicizzazione richiede una coppia di parentesi quadre per ciascuna
	* dimensione:
	*/
   int x, y;
   int matrix[rowSize][colSize];

   for (x = 0; x < rowSize; x++) // righe
   	  for (y =0; y< colSize; y++)  // colonne
	  	 matrix[x][y] = x + y;		// inizializzazione
 
   // ARRAY E INDIRIZZI, A BRACCETTO CON I PUNTATORI
   /* Essendo un int * (puntatore a intero) le forme seguenti sono
	* tutte l'un l'altra equivalenti.
	*/
   cout << "Indirizzo dell'array" << endl;
   cout << matrix << endl;
   cout << &matrix[0]  << endl;
   cout << *matrix << endl;
   cout << matrix[0] << endl;
 
   // Per ottenere l'indirizzo dell'elemento 'N' si utilizza l'operatore di
   // subscript []

   const int N = 3;
   cout << "Indirizzo dell'elemento <" << N << "> dell'array" << endl;
   cout << &matrix[N] << endl;
   cout << matrix+N << endl;
   cout << *(matrix+N) << endl;
   cout << matrix[N] << endl;

   /* Ne consegue che un array può essere attraversato sia mediante l'operatore
	* di subscript sia mediante la manipolazione diretta dei puntatori, come il
	* seguente:
	*/

   const int MAX_SIZ = 10;
   int ar[MAX_SIZ] = {10, 20, 30, 40, 50, 60, 70, 80 , 90, 100};
   // si fa puntare pbegin al primo elemento dell'array
   int *pbegin = ar;
   int *pend = ar + MAX_SIZ;	// limite

   // Ad ogni iterazione del ciclo while pbegin punta all'elemento successivo.
   while (pbegin != pend) {
   	  cout << *pbegin << ' ' << endl;
	  ++pbegin;
   }

   return(0);
}
