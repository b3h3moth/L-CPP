#include <iostream>
#include <string>
using namespace std;

int main() {
   string stringa1("stringa in c++");	// 1° forma di costruzione di string
   string stringa2;			// 2° forma di costruzione di string
   string stringa3(stringa1);		// 3° forma di costruzione di string
   string stringa4 = "Hello ";
   string stringa5 = "World!";
   string stringa6;

   cout << "stringa1: \""<< stringa1 <<"\"" << " di lunghezza " << stringa1.size() << endl;
   
   // Verifica se la stringa è vuota; restituisce true se la stringa non ha
   // caratteru, false altrimenti
   if (stringa2.empty())
      cout << "Stringa2 vuota" << endl;

   cout << "stringa3: \""<< stringa3 <<"\"" << " di lunghezza " << stringa3.size() << endl;
  
   // Copia una stringa in un'altra stringa
   stringa2 = stringa3;

   if (stringa2 == stringa3)
      cout << "Stringhe uguali" << endl;

   // Concatenamento stringhe, con l'operatore +
   // Questa forma di concatenamento tuttavia non è consigliata perchè se ci
   // fossero dei caratteri speciali - escape, spazi bianchi, etc... - sarebbero
   // sempre utilizzati, per cui le due stringhe sarebbero non riutilizzabili,
   // meglio usare un mix di string e stringhe di caratteri in C.
   stringa6 = stringa4 + stringa5;
   stringa4 += stringa5;

   cout << stringa6 << "\n" << stringa4 << endl;

   // Il mix di string e sringhe di caratteri è utile perchè rende le stringhe
   // riutilizzabili anche per il futuro
   const char *p = ", ";
   string s1("hello");
   string s2("world");
   string s3 = s1 + p + s2 + "\n";
   cout << s3 << endl;
 
   string str1;
   const char *p1 = "Ciao";
   str1 = p1;				// Conversione corretta:  C -> string
   cout << str1 << endl;
   					// Conversione errata: char *str = s3
   const char *str = s3.c_str();	// Conversione corretta: string -> C
   cout << str << endl;

   string str2("luca.suriano@cryptolab.net");
   int i, size;
   size = str2.size();

   cout << "prima: " << str2 << endl;
   
   // Modifica di caratteri utilizzando l'operatore di subscript []
   for (i=0; i<size; i++) {
      if (str2[i] == '.')
      	 str2[i] = '_';
   }
   
   cout << "dopo: " << str2 << endl;
   
   // Avrei potuto modificare caratteri utilizzando la funzione replace()
   // che sarà esaminata nel dettaglio in seguito, insieme agli algoritmi
   // generici.


   return(0);
}

