#include <iostream>
using namespace std;

void caso3(double expr);
double caso4(int expr1, int expr2);

int main() {

	// CONVERSIONI DI TIPO
	//
	// Il C++ consente la conversione di operandi ad un tipo comune, tale
	// conversione puo' essere implicita, gestita direttamente dal compilatore,
	// oppure esplicita, a cura del programmatore, la regola generale tuttavia
	// e' sempre di promuovere il tipo piu' piccolo al tipo piu' grande,
	// evitando in tal modo la perdita di precisione.
	
	///////////////////////////////////////////////////////////////////////////
	// CONVERSIONE IMPLICITA (gestita automaticamente dal compilatore)
	///////////////////////////////////////////////////////////////////////////
	
	// (Caso 1) Espressione aritmetica con tipi differenti.
	// Il tipo piu' piccolo sara' convertito al tipo piu' grande; nel caso
	// specifico l'intero in double
	cout << "Caso 1" << endl;
	
	int int_var = 10;
	double dbl_var = 3.9867;
	
	cout << int_var + dbl_var << endl;

	// (Caso 2) Assegnamento di un'espressione di un tipo ad un oggetto di tipo
	// diverso.
	// L'espressione sara' convertita al tipo dell'oggetto; in questo caso il
	// double in intero.
	cout << "\nCaso 2" << endl;
	
	int_var = dbl_var;

	cout << int_var << " - sizeof(int_var): " << sizeof(int_var) 
		 << " byte" << endl;

	// (Caso 3) Il passaggio di un'espressione come parametro formale di una
	// funzione, allorquando il tipo della espressione non coincida con il
	// parametro formale dell'espressione stessa.
	// L'espressione sara' convertita al tipo del parametro formale; nel caso
	// specifico expr sara' convertito in double
	cout << "\nCaso 3" << endl;

	int expr_int = 9;
	caso3(expr_int);

	// (Caso 4) La restituzione di una espressione, in una funzione, in cui il
	// tipo dell'espressione restituita dalla funzione sia diverso dal tipo di
	// ritorno definito nella funzione.
	// Nel caso specifico l'intero somma (dichiarato nella funzione) sara' 
	// convertito in double, come si evince dalla sizeof.
	cout << "\nCaso 4" << endl;
	
	int int_var1 = 978;
	int int_var2 = 523;
	
	cout << "sizeof(expr di ritorno): " << sizeof(caso4(int_var1, int_var2)) 
		 << " byte (double)" << endl;
	
	cout << "      Confronto con int: " << sizeof(int_var1) 
		 << " byte (int)" << endl;

	// (Conversioni aritmetiche), esse assicurano che gli operandi di un
	// operatore binario, quali possono essere l'operatore di moltiplicazione o
	// di somma, vengano promossi ad un tipo di dato comune, le regole generali
	// sono:
	//  
	//  I) Il tipo di dato e' sempre promosso ad un tipo piu' ampio per evitare
	// perdita di precisione;
	// 
	// II) Le espressioni con tipi di interi piu' piccoli rispetto ad un intero
	// saranno promossi ad intero ancor prima della valutazione.
	//
	// Il tipo di dato predefinito piu' ampio e' il long double.
	cout << "\nConversioni aritmetiche" << endl;

	long double ld_var = 9;
	double d_var = 9.10;
	float f_var = 9.80;
	int i_var = 10000;
	char c_var = 'c';
	signed char sc_var = 's';
	unsigned char uc_var = 'u';
	short int s_int_var = -3;
	unsigned short ush_var = 3;

	cout << "<double> promosso in: <long double>: " << sizeof(ld_var + d_var) 
		 << "byte  " << ld_var + d_var << endl;

	// Se ci fosse stato il long double, nell'esempio seguente,  sarebbero stati
	// promossi a long double; il concetto e' il medesimo per tutti gli altri 
	// tipi di dato di minore ampiezza rispetto al double e long double.
	//
	cout << "<float> <int> promossi <double> prima della valutazione: "
		 << sizeof(d_var + i_var + f_var) << "byte " << d_var + i_var + f_var 
		 << endl;

	cout << "<int> <char> promossi <float> prima della valutazione: " 
		 << sizeof(i_var + f_var + c_var) << "byte " << i_var + f_var + c_var 
		 << endl;

	// Promozione intera, alcune regole:
	// - char, signed char, unisgned char, short int sono promossi ad int;
	// - unsigned short int promosso int se supportato dalla macchina;
	
	cout << "<char> <signed char> <unsigned char> <short int> promossi <int>: "
		 << sizeof(c_var + sc_var + uc_var + s_int_var)  << "byte " 
		 << c_var + sc_var + uc_var + s_int_var << endl; 
	
	///////////////////////////////////////////////////////////////////////////
	// CONVERSIONE ESPLICITA (Cast)
	///////////////////////////////////////////////////////////////////////////
	// Il cast e' una conversione esplicita, supporta i seguenti operatori:
	// - static_cast
	// - dynamic_cast
	// - const_cast
	// - reinterpret_cast
	//
	// La forma generale del cast e' la seguente:
	// operatore-cast<tipo>(expr)
	//
	// operatore di cast: uno tra gli operatori di cast
	//            <tipo>: il tipo di dato in cui convertire
	//            (expr): il valore dell'espressione da convertire
	
	// (Caso 1) Sostituzione delle normali conversioni implicite standard.
	// Nel caso specifico, al fine di evitare l'eventuale promozione della 
	// variabile di tipo int in una di tipo double, per poi essere troncata,
	// si usa il cast.
	cout << "\nConversioni esplicite (Cast)" << endl;
	
	double var_dbl = 28.980;
	int var_int = 13;

	// La variabile di tipo double viene esplicitamente convertita in un tipo
	// intero.
	var_int += static_cast<int>(var_dbl);
	var_int += var_dbl;

	cout << sizeof(var_int) << "byte " << var_int << endl;

	// (Caso 2) Si utilizza il cast in quelle situazioni in cui possono essere
	// gestite diverse conversioni di tipo.
	
	// (void *) Un puntatore a ciascun tipo di dato, che non sia const, puo'
	// essere assegnato a un puntatore di tipo void; void * e' usato ogni
	// qualvolta in cui non si e' a conoscenza del tipo di un oggetto, per cui
	// generalizzando si potrebbe affermare che un puntatore a void * puo'
	// puntare verso oggetti di qualsiasi tipo.
	//
	// Da notare inoltre che in C++ non ci sono conversioni implicite 
	// automatiche da void* a qualsiasi tipo di dato, deve sempre essere
	// convertito ad un tipo specifico.
	
	void *ptr_void;
	int *ptr_int = 0;
	double *ptr_dbl = 0;
	const int *ptr_const_int = 0;

	ptr_void = ptr_int;
	ptr_void = ptr_dbl;
	
	// ptr_void = ptr_const_int;
	// Genera il seguente errore in fase di compilazione: 
	// error: invalid conversion from ‘const void*’ to ‘void*’
	//
	// Sarebbe stata corretta se anche void* fosse stato definito const:
	const void *ptr_const_void = ptr_const_int;

	return(0);
}

void caso3(double expr)
{
	// Mediante la sizeof si verifica se effettivamente il parametro formale e'
	// dell'espressione e' stato convertito in double
	int var;
	
	cout << "        Parametro: " << expr << endl;
	cout << "     sizeof(expr): " << sizeof(expr) << " byte (double)" << endl;
	cout << "Confronto con int: " << sizeof(var) << " byte (int)" << endl;
}

double caso4(int expr1, int expr2)
{
	int somma = expr1 + expr2;

	return somma;
}

// TO DO
// Inserire alcuni esempi sulle conversioni esplicite Caso 2
