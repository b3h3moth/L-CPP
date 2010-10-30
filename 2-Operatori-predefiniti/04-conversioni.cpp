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
	
	// CONVERSIONE IMPLICITA (gestita automaticamente dal compilatore)
	
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
	// Nel caso specifico l'intero somma sara' convertito in double, come si
	// evince dalla sizeof.
	cout << "\nCaso 4" << endl;
	
	int int_var1 = 978;
	int int_var2 = 523;
	
	cout << "sizeof(expr di ritorno): " << sizeof(caso4(int_var1, int_var2)) 
		 << " byte (double)" << endl;
	cout << "      Confronto con int: " << sizeof(int_var1) 
		 << " byte (int)" << endl;
	
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
