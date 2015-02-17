#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

#include "Budget.h"

int main() {
    cout << "\nClasse Budget" << endl;

    const int TOT_DIVISIONS = 3;
    double main_office_request;

    cout << "Inserisce la richiesta principale di budget: ";
    cin >> main_office_request;

    // Si invoca la funzione membro statica prima dell'istanziazione di classe
    Budget::mainOffice(main_office_request);

    Budget divisions[TOT_DIVISIONS];

    // Richiesta budget per ciascuna divisione
    for (int i = 0; i<TOT_DIVISIONS; i++) {
        double budget_amount;
        cout << "Inserire budget per la divisione '" << i+1 << "' : ";
        cin >> budget_amount;
        divisions[i].addBudget(budget_amount);
    }

    cout << fixed << showpoint << setprecision(2);
    cout << "\nRichiesta budget delle visioni:\n";
    for (int i = 0; i<TOT_DIVISIONS; i++) {
        cout << " divisione " << i+1 << "$ ";
        cout << divisions[i].getDivisionBudget() << endl;
    }

    cout << "Richiesta totale di budget: $ ";
    cout << divisions[0].getCompanyBudget() << endl;

    return(EXIT_SUCCESS);
}
