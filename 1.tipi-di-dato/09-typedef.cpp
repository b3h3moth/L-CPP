#include <iostream>
#include <vector>
using namespace std;

#define MAX_SIZE	10

int main() {

	// TYPEDEF
	// Consente di definire un sinonimo per tipi di dato predefiniti o creati
	// dall'utente, in pratica typedef e' utilizzato come uno specificatore di
	// tipo.
	//
	// Migliora la leggibilita' del programma sensibilmente.
	//
	// Si ponga attenzione al seguente concetto: typedef non introduce un nuovo
	// tipo di dato, ma semplicemente definisce un sinonimo per un tipo di dato
	// gia' esistente.
	
	typedef vector<int>		vect_int;
	typedef vector<string>	vect_str;
	typedef int				t_int;
	typedef double			t_double;
	
	// stats e' un tipo di dato vector int
	vect_int stats(MAX_SIZE, 10);

	// language e' un oggetto di tipo vector string
	vect_str language;
	language.push_back("CPP is the best language");
	
	// value e' una variabile di tipo int
	t_int value = 10;

	// cpu_clock e' una variabile di tipo double
	t_double cpu_clock;

	// typedef aiuta tantissimo nel rendere snelle dichiarazioni complesse; con
	// gli esempi che via via saranno proposti sara' ancora piu' chiara
	// l'utilita'.

   return(0);
}

