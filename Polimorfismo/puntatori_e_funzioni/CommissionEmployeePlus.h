#ifndef COMMISSIONEMPLOYEEPLUS_H
#define COMMISSIONEMPLOYEEPLUS_H

#include <string>
using namespace std;

//Inclusione del file di intestazione della classe base
#include "CommissionEmployee.h"

/* Un oggetto della classe derivata puo' sempre essere visto come un oggetto 
della classe base, ma non viceversa. */

/* Classe derivata che identifica un agente di vendita con provvigioni e fisso 
mensile, questa nuova classe eredita dalla classe base tutti i suoi membri. */
class CommissionEmployeePlus : public CommissionEmployee
{
    public:
        CommissionEmployeePlus(const string &first, const string &last, 
                const string &ssn, double sales = 0.0, double rate = 0.0,
                double salary = 0.0);

        // Funzioni per impostare e restituire il fisso mensile
        void setBaseSalary(double base);
        double getBaseSalary() const;

        // Calcola la retribuzione dell'agente di vendita
        double earnings() const;

        void print() const;

    private:
        double base_salary;             // Fisso mensile
};

#endif
