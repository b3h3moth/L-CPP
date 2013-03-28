#include <iostream>
#include <cstdlib>
using namespace std;

double divisione_zero(int num, int den);

int main() {
    int n_num, n_den;
    double divisizione;

    cout << "Inserire due numeri: " ;
    cin >> n_num >> n_den;

    try {
        divisizione = divisione_zero(n_num, n_den);
        cout << "divisione: " << divisizione << endl;
    } catch (string excstring) // Gestore delle eccezioni catch { 
        cout << excstring << endl;
    }

    cout << "fine" << endl;

    return(EXIT_SUCCESS);
}

double divisione_zero(int num, int den)
{
    /* Allorquando occorre un'eccezione, essa viene lanciata (throw); il
    parametro di throw viene utilizzato per individuare il tipo di eccezione.
    */
    if (den == 0) {
        string excstr = "Divisione per zero";
        throw excstr; // Punto di lancio (throw point)
    }

    return static_cast<double>(num/den);
}
