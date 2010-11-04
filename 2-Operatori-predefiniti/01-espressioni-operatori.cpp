#include <iostream>
#include <cstring>
using namespace std;

int main() {
	/* ESPRESSIONI
	 * 
	 * Un espressione, solitamente, e' caratterizzata da uno o piu' operandi e
	 * da un'operazione da applicare agli operandi stessi.
	 *
	 * Gli Operatori che agiscono su un operando sono detti unari
	 * Gli Operatori che agiscono su due operandi sono detti binari
	 *
	 * L'operatore di indirizzo ad esempio e' un operatore unario, l'operatore
	 * somma invece e' binario, da notare inoltre che alcuni di essi possono
	 * essere sia unari sia binari, come l'operatore di derefernziazione '*',
	 * che e' anche operatore di moltiplicazione.
	 *
	 * La valutazione di un'espressione passa attraverso l'esecuzione di due o
	 * piu' piu' espressioni, che a loro volta portano ad un risultato, 
	 * tipicamente un rvalue.
	 */
	
	int *punt;                		// Operatore di derefernziazione Puntatore
	int number = 5 * 8;       		// Operatore di moliplicazione
	punt = &number;            		// Operatore di indirizzo

	// Espressione composta: quando due o piu' operatori sono combinati
	if (number != 0 && *punt != 0)
		;

	cout << "OPERATORI LOGICI"		<< "\n"
		"!    NOT Logico"			<< "\n"
		"&&   AND Logico"			<< "\n"
		"||    OR Logico"			<< "\n\n"
		"OPERATORI RELAZIONALI"		<< "\n"
		"<    Minore di"			<< "\n"
		"<=   Minore uguale di"		<< "\n"
		">    Maggiore"				<< "\n"
		">=   Maggiore uguale"		<< "\n\n"
		"OPERATORI DI UGUAGLIANZA"	<< "\n"
		"==   Uguaglianza"			<< "\n"
		"!=   Disuguaglianza"		<< "\n\n"
		"Il risultato di tali operatori e' un bool true o false" << "\n\n"
		"OPERATORI ARITMETICI" 		<< "\n"
        "+ somma"					<< "\n"
        "- sottrazione"				<< "\n"
        "* moltiplicazione"			<< "\n"
        "/ divisione"				<< "\n"
        "% resto"					<< endl;

        int var = 5, var1 = 10, var2 = 22;
        
		///////////////////////////////////////////////////////////////////////
        // OPERATORE SOMMA +
		///////////////////////////////////////////////////////////////////////
		int var3 = var1 + var2;
        
		///////////////////////////////////////////////////////////////////////
        // OPERATORE SOTTRAZIONE -
		///////////////////////////////////////////////////////////////////////
        int var4 = var3 - var2;
        
		///////////////////////////////////////////////////////////////////////
        // OPERATORE MOLTIPLICAZIONE *
		///////////////////////////////////////////////////////////////////////
		int var5 = var1 * var2;
        
		///////////////////////////////////////////////////////////////////////
        // OPERATORE DIVISIONE /
		///////////////////////////////////////////////////////////////////////
        // Il risultato della divisione tra due interi dara' un intero, qualora 
		// il quoziente contenesse una parte frazionaria, sara' troncata.
        
		int var6 = var2 / var1;
        
		///////////////////////////////////////////////////////////////////////
        // OPERATORE RESTO (o modulo) %
		///////////////////////////////////////////////////////////////////////
        // Calcola il resto della divisione tra interi, applicabile solo a:
        // short; int; long; char.
        
		int var7 = var2 % var1;
        int var8 = 21 % -5;             // 1 o -1 dipendente dalla macchina
        
        // Eccezioni aritmetiche
        // Un char puo' contenere 8 bit, per cui un valore che e' compreso tra 
		// 127 e 255, byte supera questo valore andando in overflow
        
		char byte = 32;
        int val = 8;
        byte = val * byte; // Overflow 
        
		///////////////////////////////////////////////////////////////////////
		// OPERATORE DI ASSEGNAMENTO =
		///////////////////////////////////////////////////////////////////////
		// L'operatore di assegnamento sovrascrive il valore di un oggetto con
		// un nuovo valore, da non confondersi con l'inizializzazione, che puo'
		// essere effetuata una sola volta durante la definizione, 
		// l'assegnamento di un valore invece puo' essere eseguito diverse 
		// volte durante l'esecuzione di un programma.
		
		int int_var = 9, dbl_var = 9.1982738, mix_var = 0;
		
		int_var = 9;					// Lecito
		dbl_var = 10.10;				// Lecito
		
		// Lecito, conversione in intero; l'espressione di destra, quando
		// possibile, viene fatta coincidere nel tipo con lvalue in questo caso,
		// ossia l'espressione di sinistra, pertanto il double viene troncato
		// lasciando solo la parte intera.
		//
		// L'operando di sinistra deve essere sempre un lvalue; si ricorda a 
		// tal proposito che un lvalue deve contenere un indirizzo.

		mix_var = dbl_var * int_var;	
		cout << "mix_var: " << mix_var << endl;

		// A ciascun elemento assegnato 10
		int var_a, var_b, var_c;
		var_a = var_b = var_c = 10;
		// Operatore di incremento ++ Aggiunge 1 
		// Operatore di decremento -- Toglie 1
		++var_a; // prefisso
		--var_b;
		var_c++; // suffisso
		var_a--;
		var_b--;
		cout << "var_a: " << var_a << " var_b: " << var_b << " var_c: "<< var_c << endl;

		///////////////////////////////////////////////////////////////////////
		// OPERATORE CONDIZIONALE
		///////////////////////////////////////////////////////////////////////
		// expr ? expr2 : expr3
		// Se expr e' vera ritorna expr2, se falsa expr3
		cout << ((var_a > var_b) ? true : false) << endl;
		cout << ((var_b > var_a) ? true : false) << endl;

		///////////////////////////////////////////////////////////////////////
		// OPERATORE DI SERIALIZZAZIONE (o operatore virgola) ,
		///////////////////////////////////////////////////////////////////////
		// Il lavoro dell'operatore virgola è di far sì che diverse espressioni,
		// siano valutate da sinistra a destra, il risultato ed anche il tipo
		// corrisponde con l'espressione più a destra della lista; un caso
		// tipico di utilizzo è mediante un ciclo for, oppure con l'operatore
		// condizionale.
		
		// Da noare il valore delle variabili, se non fossero state inserite tra
		// parentesi il compilatore si sarebbe lamentato, poichè ci sarebbero 
		// stati due o piu' argomenti, aggiungendo le parentesi invece si
		// lavoreraì con un singolo argomento. 
		//
		// Si noti, infine, come l'operatore di serializzazione assegnera', alle
		// variabili da inizializzare, sempre l'espressione alla estremità 
		// destra.
		int var_opser_a = (10, -17);
		double var_opser_b = (-89.10, var_opser_a, 10.9);
		cout << "Variabile intera: " << var_opser_a << "\nVariabile double: " 
			<< var_opser_b << endl;

		///////////////////////////////////////////////////////////////////////
		// TABELLA SULLA PRECEDENZA DEGLI OPERATORI
		///////////////////////////////////////////////////////////////////////
		cout << "\nGli operatori in alto hanno la precedenza verso quelli in basso\n" << endl;
		cout << "  OPERATORE      " << "    FUNZIONE          " << "     USO" << endl;
		cout << "-----------------" << "----------------------" << "-----------------------------" << endl;
		cout << "::               " << " scopo globale        " << " ::nome" << endl;
		cout << "::               " << " scopo di classe      " << " classe::nome" << endl;
		cout << "::               " << " scopo di namespace   " << " namespace::nome" << endl;
		cout << "-----------------" << "----------------------" << "-----------------------------" << endl;
		cout << ".                " << " seletori di membro   " << " oggetto.membro" << endl;
		cout << "->               " << " seletori di membro   " << " puntatore->membro" << endl;
		cout << "[]               " << " subscript            " << " variabile[expr]" << endl;
		cout << "()               " << " chiamata di funzione " << " nome(lista_expr)" << endl;
		cout << "()               " << " costruzione di tipo  " << " tipo(lista_expr)" << endl;
		cout << "++               " << " incremento postfisso " << " lvalue++" << endl;
		cout << "--               " << " decremento postfisso " << " lvalue--" << endl;
		cout << "typeid           " << " type ID              " << " typeid(tipo)" << endl;
		cout << "typeid           " << " type ID run time     " << " typeid(tipo)" << endl;
		cout << "const_cast       " << " conversione di tipo  " << " const_cast<tipo>(expr)" << endl;
		cout << "dynamic_cast     " << " conversione di tipo  " << " dynamic_cast<tipo>(expr)" << endl;
		cout << "reinterpret_cast " << " conversione di tipo  " << " reinterpret_cast<tipo>(expr)" << endl;
		cout << "static_cast      " << " conversione di tipo  " << " static_cast<tipo>(expr)" << endl;


		return(0);
}
