#include <iostream>
using namespace std;

int main() {
   int ival = 100;
   int &rval = ival;
   /*
     Creando un riferimento posso modificare, mediante il riferimento, anche
     l'oggetto a cui il riferimento punta
     rval = 20;
     
     Questo di seguito invece è un errore poichè un riferimento deve essere
     inizializzato con un oggetto:
     int &rrv;
   */
   cout << ival << " " << rval << endl;

   // Non può essere inizializzato con l'indirizzo di un oggetto
   // int &rval = &val;
   // Tuttavia è ammesso un riferimento ad un puntatore

   int *pi = &ival;	// Assegno l'indirizzo di ival a pi
   int *rval_ptr = pi;
   cout << pi << " " << &ival << " " << rval_ptr << endl;

   int min_val = 0;
   rval = min_val;	// Sto modificando ival

   double dval = 1024;
   // valide soltanto per riferimenti const
   const int &rif1 = 1024;
   const int &rif2 = dval;
   const double &rif3 = dval + 1.0;
   cout << rif1 << " " << rif2 << " " << rif3 << endl;

   /*
   Errore, si richiede un riferimento costante
   const int int_var = 1024;
   int *&p_rif = &ival;
   */

   // La correzione è la seguente
   
   const int int_var = 1024;
   const int *const &p_rif = &int_var;

   // Quando assegno un riferimento ad un altro, cambia solo il valore
   // dell'oggetto puntato ma il riferimento resta lo stesso; la regola è che
   // quando si crea un riferimento non può essere assegnato ad un altro
   // oggetto.

   int var1 = 100;
   int var2 = 200;
   int &rif_a = var1;
   int &rif_b = var2;
   cout <<  var1 << " " << var2 << " " << rif_a << " " << rif_b << endl; 
   rif_a += rif_b;	// Cambia il contenuto di var1 e di conseguenza di rif_a,
   			// i riferimenti agli oggetti restano inalterati
   cout <<  var1 << " " << var2 << " " << rif_a << " " << rif_b << endl; 

   return(0);
}
 
