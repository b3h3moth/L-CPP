#include <iostream>
using namespace std;

#include <vector>

// Come esempio della sezione si implementa una stack, una pila, secondo una
// politica LIFO (Last in First Out), ovvero, l'ultimo elemento ade entrare 
// nella sara' anche il primo ad uscire dalla pila stessa;  come esempio nel
// mondo reale si puo' immaginare la classica pila di piatti.

// La classe intStack sara' in grado di gestire elementi di tipo intero
class Stackint 
{
	public:
		// Costruttore
		Stackint(int capacity)
			: _stack(capacity), _top(0) {};

		// Preleva un elemento
		bool pop(int &value);
		// Inserisce un elemento
		bool push(int value);

		// Stack pieno
		bool full();
		// Stack vuoto
		bool empty();
		// Visualizzazione di tutti gli elementi dello stack
		void display();

		int size();
	private:
		// Il valore del prossimo posto disponibile sara' memorizzato in _top;
		// ciascun nuovo elemento sara' posizionato nello stack mediante push().
		int _top;
		// Ogni nuovo elemento sara' immagazzinato in _stack di tipo vector
		vector<int> _stack;
};

// _top contiene il numero degli elementi sulla pila, pertanto size() restiuisce
// semplicemente _top
inline int Stackint::size() 
{ 
	return _top; 
};

// empty() restituisce true se _top e' uguale a 0, false alrimenti
inline bool Stackint::empty() 
{
	return (_top ? false: true);
};

// full() restituisce true se _top e' uguale a stack.size(), ovvero se tutti gli
// elementi sono stati inseriti nello stack
inline bool Stackint::full() 
{
	return ((_top < _stack.size()-1) ? false : true);
};

// Recupera il primo elemento nello stack
bool Stackint::pop(int &value)
{
	if ( empty() )
		return false;

	value = _stack[--_top];
	cout << "pop(): " << value << endl;

	return true;
}

// Inserisce un elemento in cima allo stack
bool Stackint::push(int value)
{
	cout << "push(): " << value << endl;

	if ( full() )
		return false;

	_stack[_top++] = value;

	return true;
}

// Visualizza ciascun elemento della pila, dalla base alla cima
void Stackint::display()
{
	if ( !size() )  
		cout << "(0)\n";

	cout << "[totale elementi: " << size()+1 << "] (BASE: ";
	
	for (int x = 0; x<_top; ++x)
		cout << _stack[x] << " " ;
	cout << " :TOP)\n";
}

int main() {
	Stackint stack(20);
	stack.push(1);

	int x;

	for (x=0; x<10; x++) {
		if ( stack.empty() == false)
			stack.push(x);
		stack.display();
	}

	for (x=10; x>0; x--) {
		if ( stack.empty() == false)
			stack.pop(x);
		stack.display();
	}
	
	return(0);
}

