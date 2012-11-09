#include <iostream>
using namespace std;

#include "CommissionEmployeePlus.h"

// Il costruttore
CommissionEmployeePlus::CommissionEmployeePlus(const string &first, 
        const string &last, const string &ssn, double sales, double rate,
        double salary) : CommissionEmployee(first, last, ssn, sales, rate)
{
    setBaseSalary(salary);
}

void CommissionEmployeePlus::setBaseSalary(double salary)
{
    base_salary = (salary < 0.0) ? 0.0 : salary;
}

double CommissionEmployeePlus::getBaseSalary() const
{
    return base_salary;
}

/* Ridefinizione della funzione della classe base per il calcolo della 
retribuzione, ossia i ricavi di un agente di vendita. 
Alla funzione definita dalla classe base si aggiunge il fisso mensile. */
double CommissionEmployeePlus::earnings() const
{
    /* Da notare che se non si aggiungesse la classe base seguita dall'operatore
    di risoluzione di scope, si incorrerebbe in un ciclo infinito, poiche' la
    funzione invocherebbe sempre se stessa e non quella della classe base. 
    In questo modo peraltro si evita la ripetizione di codice. */
    return getBaseSalary() + CommissionEmployee::earnings();
}

/* Ridefinizione della funzione della classe base per la stampa dei dati dell'
agente. */
void CommissionEmployeePlus::print() const
{
    cout << "Salario di base \n";

    /* Anche in questo caso si accede alla funzione della classe base mediante
    il nome della classe e l'operatore di risoluzione di scope. */
    CommissionEmployee::print();

    /* L'informazione aggiuntiva per cui e' stata ridefinita la funzione, ossia
    il fisso mensile. */
    cout << "\nFisso mensile: " << getBaseSalary();
}

/* Le funzioni membro nascondono i dati della classe, per cui utilizzarli in 
questo modo favorisce l'integrita' dello stato degli oggetti; cio' che e' stata
presentata e' l'ereditarieta' semplice.

La ridefinizione delle funzioni membro e' estremamente utile per fornire 
funzioni decisamente piu' consone per la classe derivata. Cio' che e' stato
presentato riguardo l'ereditarieta' sono alcuni dei principi fondamentali per
progettare buone classi, seguendo sempre le regole dell'ingegneria del software.
*/
