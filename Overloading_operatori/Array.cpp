#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

#include "Array.h"

#define DEFAULT_SIZE 10

// Costruttore di default
Array::Array(int array_size)
{
    // Verifica l'ampiezza dell'array
    size = (array_size > 0 ? array_size : DEFAULT_SIZE);
    
    // Alloca lo spazio necessario per un array di dimensione size
    ptr = new int[size];

    // Inizializza ciascun elemento dell'array a 0
    for (int i=0; i<size; i++)
    	ptr[i] = 0;
}

// Costruttore di copia
Array::Array(const Array &array_copy) : size(array_copy.size)
{
    ptr = new int[size];

    // Si copiano tutti gli elementi dell'array di inizializzazione nel nuovo
    for (int i=0; i<size; i++)
    	ptr[i] = array_copy.ptr[i];
}

// Distruttore
Array::~Array()
{
    delete [] ptr;
}

// Restituisce il numero degli elementi di un array
int Array::getSize() const
{
    return size;
}

/* Ridefinizione dell'operatore di assegnamento
"oggetto1 = oggetto2" produce "oggetto1.operator=(oggetto2)" */
const Array &Array::operator=(const Array &right_operand)
{
    // Verifica che non si tratti di un auto assegnamento
    if (&right_operand != this)
    {
    	/* Verifica lo spazio necessario per l'array, se sono di dimensioni
	diverse si procede alla deallocazione, dopodiche' si crea un nuovo array
	con la dimensione dell'array da copiare. */
	if (size != right_operand.size)
	{
	    delete [] ptr;
	    size = right_operand.size;
	    ptr = new int[size];
	}

	/* Si procede a copiare membro a membro tutti gli elementi dall'array di
	origine a quello di destinazione. */
	// for (int i=0; i<right_operand.size; i++)
	for (int i=0; i<size; i++)
	    ptr[i] = right_operand.ptr[i];
    }
    // Restituzione dell'oggetto corrente
    return *this;
}

/* Ridefinzione dell'operatore di uguaglianza; verifica se due array sono uguali
"oggetto1 == oggetto2" produce "oggetto1.operator==(oggetto2)" */
bool Array::operator==(const Array &right_operand) const
{
    // Si verifica se gli array hanno dimensione diversa
    if (size != right_operand.size)
    	return false;

    // Si verifica se ciascun elemento degli array non corrisponde
    for (int i=0; i<size; i++)
    	if (ptr[i] != right_operand.ptr[i])
	    return false;

    // Gli arrai coincidono perfettamente
    return true;
}

/* Ridefinizione dell'operatore di indicizzazione, per oggetti non costanti;
il riferimento restituito e' un lvalue
"oggetto1[N]" produce "oggetto1.operator[](N)" */
int &Array::operator[](int subscript)
{
    // Verifica la validita' degli indici
    if (subscript<0 || subscript>=size)
    {
    	cerr << "\nErr. subscript " << subscript << " fuori dai limiti" << endl;
	exit(1);
    }

    return ptr[subscript];
}

/* Ridefinizione dell'operatore di indicizzazione, per oggetti costanti;
il riferimento restituito e' un rvalue
"oggetto1[N]" produce "oggetto1.operator[](N)" */
int &Array::operator[](int subscript) const
{
    // Verifica la validita' degli indici
    if (subscript<0 || subscript>=size)
    {
    	cerr << "\nErr. subscript " << subscript << " fuori dai limiti" << endl;
	exit(1);
    }

    return ptr[subscript];
}

// Ridefinizione dell'operatore di input
istream &operator>>(istream &input, Array &arr)
{
    for (int i=0; i<arr.size; i++)
    	input >> arr.ptr[i];

    return input;
}

// Ridefinizione dell'operatore di output
ostream &operator<<(ostream &output, const Array &arr)
{
    int i;

    for (i=0; i<arr.size; i++)
    {
    	output << setw(12) << arr.ptr[i];
	
	// Quattro per riga
	if((i+1) %4 == 0)
	    output << endl;
    }

    if (i%4 != 0)
    	output << endl;

    return output;
}
