#include <iostream>
#include <cstring>

using namespace std;

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

   return(0);
}

