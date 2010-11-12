#include <iostream>
using namespace std;

#include <vector>

#define MAX_STACK 10

// Come esempio della sezione si implementa una stack, una pila, secondo una
// politica LIFO (Last in First Out), ovvero, l'ultimo elemento ad entrare 
// sara' anche il primo ad uscire dallo stack; come esempio nel mondo reale si
// pensi alla classica pila di piatti.

// La classe Stack sara' in grado di gestire elementi di tipo intero
class Stack 
{
	public:
		// Costruttore
		Stack(int capacity) : _stack(capacity), _top(0) {};

		// Rimuove l'elemento in cima allo stack
		bool pop(int &value);
		
		// Inserisce un elemento in cima allo stack
		bool push(int value);

		// Restituisce l'elemento in cima allo stack, senza rimuoverlo
		int peek();

		// Stack pieno
		bool full();
		
		// Stack vuoto
		bool empty();
		
		// Visualizzazione di tutti gli elementi dello stack
		void display();

		// Ampiezza dello stack
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
inline int Stack::size() 
{ 
	return _top; 
}

// empty() restituisce true se _top e' uguale a 0, false altrimenti
inline bool Stack::empty() 
{
	return (_top ? false: true);
}

// full() restituisce true se _top e' uguale a stack.size(), ovvero se tutti gli
// elementi sono stati inseriti nello stack
inline bool Stack::full() 
{
	return ((_top < _stack.size()-1) ? false : true);
}


// Rimuove l'elemento in cima allo stack, si gestisce l'operazione mediante la
// forma prefissa dell'operatore di decremento.
bool Stack::pop(int &value)
{
	if ( empty() )
		return false;

	value = _stack[--_top];
	
	cout << "pop(): " << value << endl;

	return true;
}


// Inserisce un elemento in cima allo stack, si gestisce l'operazione mediante
// la forma postfissa dell'operatore di incremento.
bool Stack::push(int value)
{
	cout << "push(): " << value << endl;

	if ( full() )
		return false;

	_stack[_top++] = value;

	return true;
}


// Restituisce l'ultimo elemento dello stack, senza rimuoverlo
int Stack::peek()
{
	int value = -1;

	if ( empty() ) {
		cout << "empty: " << value << endl;
		return value;
	}
	
	value = _stack[_top-1];

	cout << "Primo elemento: " << value << endl;

	return value;
}


// Visualizza gli elementi dello stack
void Stack::display()
{
	if ( !size() )  
		cout << "(0)\n";

	cout << "[totale elementi: " << size()+1 << "] (BASE: ";
	
	for (int x = 0; x<_top; ++x)
		cout << _stack[x] << " " ;
	cout << " :TOP)\n";
}


// Test dello stack
int main() {
	Stack stack(10);
	stack.push(1000);

	int x;

	for (x=0; x<=MAX_STACK; x++) {
		if ( stack.empty() == false )
			stack.push(x*x);
		stack.peek();
		stack.display();
	}

	for (x=MAX_STACK; x>0; x--) {
		if ( stack.empty() == false)
			stack.pop(x);
		stack.display();
	}
	
	return(0);
}
