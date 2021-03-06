#include <iostream>
#include <cstdlib>
using namespace std;

#include <vector>

#define VEC_DIM       30
#define VEC_CAPACITY  64

int main() {
    /* CRESCITA DI UN VETTORE
       ----------------------
    Anzitutto e' necessario distinguere tra capacita' e dimensione; la capacita'
    di un vettore e' il numero totale degli elementi che possono essere aggiunti
    ad esso prima che questi debba essere ridimensionato, e' associata solo ad 
    un contenitore con memorizzazione contigua degli elementi; la dimensione di
    un vettore invece e' il numero totale degli elementi che contiene al 
    momento.
    
    Capacita' e dimensione possono essere ottenute con capacity() e size()
    rispettivamente. */
    vector<int> int_vector;
    int i;
    
    // Entrambi naturalmente saranno, al momento, impostati a zero
    cout << "int_vector dimensione: " << int_vector.size() << endl;
    cout << "int_vector  capacita': " << int_vector.capacity() << endl;
    cout << endl;
    
    for (i=0; i<VEC_DIM; ++i) {
        /* VEC_DIM elementi del vettore vengono riempiti con il valore della
	variabile intera i */
        int_vector.push_back(i);
        
        // Si verifica nuovamente la capacita' e la dimensione
        cout << "int_vector dimensione: " << int_vector.size() << 
                " - int_vector capacita': " << int_vector.capacity() << endl;
    }
    
    /* L'esempio appena esposto ci mostra come la capacita' e la dimensione
    iniziale siano 0, dopo il primo inserimento invece la dimensione aumenta di 
    pari passo con l'inserimento di ciascun nuovo elemento.
    
    Discorso a parte per la capacita', poiche', allorquando si raggiunge la 
    capacita' massima, il vettore alloca il doppio[1] della sua capacita' 
    attuale e copia ciascun elemento nella memoria appena allocata.
    
    La crescita di un vettore pertanto avviene in maniera dinamica.
	
    COSTI E BENEFICI DELLA CRESCITA DI UN VETTORE
    ---------------------------------------------
    Da notare che piu' si richiede al vettore di ridimensionarsi piu' costoso
    diventa l'inserimento degli elementi. Piu' e' grande il tipo di dato con cui
    si crea il vettore, minore sara' l'efficienza rispetto ad una lista; un tipo
    di dato grande infatti, ma con capacita' ridotta, ha il proprio punto debole
    individuabile nel rallentamento, proprio nella riallocazione e nella copia 
    degli elementi.
	
    Con un tipo di dato piu' piccolo, un vettore e' piu' efficiente di una 
    lista, con oggetti di grandi dimensioni invece e' vero il contrario.
	
    IMPOSTARE LA CAPACITA' DI UN VETTORE
    ------------------------------------
    E' possibile impostare esplicitamente la capacita' di un vettore mediante
    l'operazione reserve().
    */
    
    vector<string> str_vector;
    str_vector.reserve(VEC_CAPACITY);
	
    cout << "\nstr_vector dimensione: " << str_vector.size() << 
	    " - str_vector capacita': " << str_vector.capacity() << endl;

    /*Il caso specifico presenta un vettore di dimensione 0, con una capacita'
    impostata a VEC_CAPACITY */
    
    return(EXIT_SUCCESS);
}


// [1] La capacita' di un vettore segue il seguente ridimensionamento:
// 2 4 8 16 32 64 128 256 1024 2048 etc...
