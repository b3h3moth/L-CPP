#include <iostream>
using namespace std;

#include <vector>

// Come esempio della sezione si implementa una stack, una pila, secondo una
// politica LIFO (Last in First Out), ovvero, l'ultimo elemento ade entrare 
// nella sara' anche il primo ad uscire dalla pila stessa;  come esempio nel
// mondo reale si puo' immaginare la classica pila di piatti.

// La classe intStack sara' in grado di gestire elementi di tipo intero
class iStack 
{
	public:
		// Costruttore
		iStack(int capacity)
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
inline int iStack::size() 
{ 
	return _top; 
};

// empty() restituisce true se _top e' uguale a 0, false alrimenti
inline bool iStack::empty() 
{
	return (_top ? false: true);
};

// full() restituisce true se _top e' uguale a stack.size(), ovvero se utti gli
// elementi sono stati inseriti nello stack
inline bool iStack::full() 
{
	return ((_top < _stack.size()-1) ? false : true);
};



int main() {
	
	
	return(0);
}

