#include <iostream>
using namespace std;

#include <vector>
#include <map>
#include <list>

class Testing {
    public:
    	Testing(int a, int b) : x(a), y(b) {} ;
    private:
    	const int x;
	const int y;
};

int main() {
    /* OPERATORE SIZEOF
    Restituisce la dimensione in byte di un tipo di dato o di un oggetto, il cui
    valore di ritorno sara' di tipo size_t.
    
    Nota: Per quanto riguarda gli oggetti restituira' solo il valore dei dati 
    membro.
    
    Il risultato dipende sempre dalla macchina sulla quale si sta scrivendo
    il programma, generalmente un intero vale 4 byte, un char 1 byte, etc.;
    l'operatore sizeof inoltre, essendo valutato dal compilatore come se fosse 
    un'espressione costante, puo' essere inserito in ogni punto del programma in
    cui possa essere inserita una espressione costante. */
    
    int array[] = {13,4235,465,78,345,654,54,65};
    size_t size_array = sizeof(array);
    cout << "Array array: " << size_array << " byte" << endl;
    
    // Se si volesse avere il numero degli elementi dell'array
    size_t elem_array = size_array / sizeof(int);
    cout << "Elementi array array: " << elem_array << endl;
    
    cout << "\nMemoria assegnata a vari tipi di dato:" << endl;
    
    int *puntatore;
    int tipo_int;
    signed int tipo_int_s;
    unsigned int tipo_int_u;
    double tipo_double;
    float tipo_float;
    char tipo_char;
    signed char tipo_char_s;
    unsigned char tipo_char_uc;
    short tipo_short;
    signed short tipo_short_s;
    unsigned short tipo_short_u;
    long tipo_long;
    long double tipo_long_double;
    signed long tipo_long_s;
    unsigned long tipo_long_u;
    size_t tipo_size_t;
    vector<int> tipo_vector;
    list<int> tipo_list;
    map<int, int> tipo_map;
    string tipo_string;
    
    cout << "tipo puntatore: " << sizeof(puntatore) << " byte" << endl;
    cout << "tipo *puntatore: " << sizeof(*puntatore) << " byte" << endl;
    cout << "tipo int: " << sizeof(tipo_int) << " byte" << endl;
    cout << "tipo double: " << sizeof(tipo_double) << " byte" << endl;
    cout << "tipo float: " << sizeof(tipo_float) << " byte" << endl;
    cout << "tipo char: " << sizeof(tipo_char) << " byte" << endl;
    cout << "tipo long: " << sizeof(tipo_long) << " byte" << endl;
    cout << "tipo unsigned char: " << sizeof(tipo_char_uc) << " byte" << endl;
    cout << "tipo signed char: " << sizeof(tipo_char_s) << " byte" << endl;
    cout << "tipo short: " << sizeof(tipo_short) << " byte" << endl;
    cout << "tipo size_t: " << sizeof(tipo_size_t) << " byte" << endl;
    cout << "tipo vector: " << sizeof(tipo_vector) << " byte" << endl;
    cout << "tipo string: " << sizeof(tipo_string) << " byte" << endl;
    cout << "tipo signed short: " << sizeof(tipo_short_s) << " byte" << endl;
    cout << "tipo unsigned short: " << sizeof(tipo_short_u) << " byte" << endl;
    cout << "tipo signed int: " << sizeof(tipo_int_s) << " byte" << endl;
    cout << "tipo unsigned int: " << sizeof(tipo_int_u) << " byte" << endl;
    cout << "tipo signed long: " << sizeof(tipo_long_s) << " byte" << endl;
    cout << "tipo unsigned long: " << sizeof(tipo_long_u) << " byte" << endl;
    cout << "tipo long double: " << sizeof(tipo_long_double) << " byte" << endl;
    cout << "tipo list: " << sizeof(tipo_list) << " byte" << endl;
    cout << "tipo map: " << sizeof(tipo_map) << " byte" << endl;
    
    Testing object(0,0);

    cout << "\nOggetto 'object': " << sizeof(object) << endl;

    return(0);
}
