#include <iostream>
#include <string>
using namespace std;

/* Template di funzione e template di classe permettono di sviluppare secondo i
canoni della programmazione generica, ovvero e' possibile ad esempio scrivere
funzioni e classi generiche che si possono adattare ai diversi tipi di dato. 

La sintassi del template prevede l'uso della parola chiave 'template' seguita,
tra parentesi angolari, dalla lista dei parametri formali del template stesso; 
ciascun parametro formale deve essere preceduto o dalla parola chiave 'class'
o dalla parola chiave 'typename':

template<typename T>
template<class element_type>

Nota: non e' necessario specificare ne' il  tipo dei parametri ne' il valore di
      ritorno, ma solo il tipo generico, che nel caso del tempate di funzione e'
      T.

Nota: L'utilizzo dei template favorisce il riutilizzo del software. 

La creazione di un template non causa l'utilizzo di memoria, cosa che avverra' 
invece allorquando il compilatore incontrera' una invocazione di chiamata alla
relativa funzione.

Lo scopo nell'utilizzo dei template e' la possibilita' di scrivere un'unica
funzione che possa lavorare con diversi tipi di dato; il concetto chiave della
programmazione generica risiede proprio in questo.
*/
class BasicClass {
    public:
	BasicClass (const string &str) : name(str) {}
	void print() { cout << name << endl; }
    private:
    	string name;
};

/* Nel caso specifico si crea un template per lo swap di due tipi di dato */
template <class T>
void swap_func(T& x, T& y) {
    T temp = x;
    x = y;
    y = temp;
}

int main(void) {
    BasicClass object1("Antonio");
    BasicClass object2("Salvatore");
    int int1 = 111, int2 = 999;
    float flo1 = 11.11, flo2 = 99.99;
    double doub1 = 11.11, doub2 = 99.99;
    char char1 = 'a', char2 = 'z';

    swap_func(object1, object2);
    swap_func(int1, int2);
    swap_func(o1, flo2);
    swap_func(doub1, doub2);
    swap_func(char1, char2);


    object1.print();
    object2.print();

    cout << int1 << " - " << int2 << endl;
    cout << flo1 << " - " << flo2 << endl;
    cout << doub 1 << " - " << doub2 << endl;
    cout << char1 << " - " << char2 << endl;

   return(0);
}
