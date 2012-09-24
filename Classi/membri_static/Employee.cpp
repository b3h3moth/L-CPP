#include <iostream>
#include <cstring>
using namespace std;

#include "Employee.h"

/* Il dato membro static con ambito di visibilita' a livello di file.
E' bene ricordare che un dato membro static, di un tipo fondamentale, e' 
automaticamente inizializzato a 0, in questo caso tuttavia si e' optato per una 
inizializzazione 'esterna' come se fosse un dato globale, ma non lo e'. */
int Employee::count =  0;

/* La funzione membro static restituisce il numero degli oggetti istanziati, si
noti che e' stata dichiarata static nel file .h */
int Employee::getCount()
{
    return count;
}

/* Il costruttore della classe Employee alloca lo spazio necessario per 
contenere nome e cognome, dopodiche' adopera una strcpy per copiarli
nell'oggetto. */
Employee::Employee(const char *const first, const char *const last)
{ 
    firstName = new char[strlen(first +1)];
    strcpy(firstName, first);

    lastName = new char[strlen(last +1)];
    strcpy(lastName, last);

    /* Incrementa il contatore static di oggetti, in pratica ad ogni nuova
    istanza di una classe, tale contatore aumenta di 1, */
    count++;

    cout << "Costruttore Employee su " << firstName << " " << lastName << endl;
}

/* Il distruttore di classe, dealloca la memoria precedenemente allocata per
salvare nome e cognome, dopodiche' riduce di 1 il dato membro static. */
Employee::~Employee()
{
    cout << "DIstruttore ~Employee su " << firstName << " " << lastName << endl;

    delete [] firstName;
    delete [] lastName;

    firstName = 0;
    lastName = 0;

    // Decrementa in numero di oggetti isranziati
    count--;
}

// Restituzione del nome di un impiegato
const char *Employee::getFirstName() const
{
    return firstName;
}

// Restituzione del cognome di un impiegato
const char *Employee::getLastName() const
{
    return lastName;
}
