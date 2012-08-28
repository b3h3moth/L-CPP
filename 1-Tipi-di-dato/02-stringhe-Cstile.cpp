#include <iostream>
// Per lavorare con le stringhe in stile C e' necessario aggiungere l'header 
// seguente:
#include <cstring>

using namespace std;

// Stringa letterale, ossia una serie di caratteri racchiusi tra doppi apici
// E' consigliabile tuttavia, utilizzare string
const char *st = "linguaggio c++";
const char *p = st;

int main() {
   int len = 0;

   while (*st++)
      len++;

   st = st - len -1; /* Questa istruzione così è poco elegante,
   			meglio aggiungere un altro puntatore e farlo
			puntare alla sringa originale.

			const char *p = st;
			*/
   cout << len << ": " << p << endl;

   /* Per modificare una stringa letterale si puo' utilizzare un array, se si 
	utilizzasse un puntatore si incorrerebbe in un errore */
   char *ptr = "testing";
   // ptr[2] = 'a'; errore
   char str[] = "Cpp programming language";
   str[1] = '+';
   str[2] = '+';
   cout << str << endl;

   return(0);
}

