#include <iostream>
using namespace std;

int main() {
   // I Tipi enumerativi sono utili per definire/raggruppare un insieme di
   // costanti; al primo valore viene assegnato 0 di default, ma l'enumerazione
   // può iniziare con un numero diverso:
   enum open_modes{input = 1, output, append};

   // Il valore può non essere unico
   enum languages{cpp = 2, c, java = 3, lisp};
   // cpp =  2, c = 3, java = 3, lisp = 4

   /* Si potrebbe passare ad una funzione uno dei 3 valori
      open_file("file.txt", output);
      
      Ma sarebbe errore passare il corrispettivo numerico ad una funzione 
      dichiarata ad esempio in questo modo:
      void open_file(string str, open_modes mode);
      
      open_file("file.txt", 2);
      2 non è di tipo open_modes
   */
      
   open_modes val;
   val = output;
   
   /*
    * Sarebbe lecito però passare alla funzione precedente:
    * open_file("file.txt", val);
    */

   // Un oggetto enumerativo può essere inizializzato soltanto con un altro
   // oggetto dello stesso tipo

   languages php;
   languages javascript;
   php = java; 		// Lecito, entrambi di tipo languages
   // javascript = 3;	 Non lecito, 3 è un int
   // javascript = output;	 Non lecito, tipi enumerativi diversi
   javascript = php;


   return(0);
}

