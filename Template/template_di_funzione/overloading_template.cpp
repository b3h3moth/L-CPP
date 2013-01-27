#include <iostream>
#include <cstdlib>
using namespace std;

// Overloading dei template di funzione

template<class T>
T sum(T var1, T var2)
{
    return var1 + var2;
}

// Overloading della funzione sum
template<class T>
T sum(T var1, T var2, T var3)
{
    return var1 + var2 + var3;
}

int main() {
    double n1, n2, n3;

    cout << "Inserire 2 valori: ";
    cin >> n1 >> n2;
    cout << "La somma e': " << sum(n1, n2) << endl;

    cout << "Inserire 3 valori: ";
    cin >> n1 >> n2 >> n3;
    cout << "La somma e': " << sum(n1, n2, n3) << endl;

    return(EXIT_SUCCESS);
}
