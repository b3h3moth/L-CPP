#include <iostream>
#include <cstdlib>
using namespace std;

// Possono essere utilizzati diversi tipi, come nel caso in oggetto 
template<class T1, class T2>
int max(const T1 &var1, const T2 &var2)
{
    if (sizeof(var1) > sizeof(var2))
        return sizeof(var1);
    else
        return sizeof(var2);
}

int main() {
    int var_int = 0;
    double var_dbl = 0.0;
    float var_flt = 0.0;
    char var_chr = ' ';

    // Stampa in output la dimensione di ciascun tipo di dato
    cout << "sizeof(int): " << sizeof(int) << " byte" << endl;
    cout << "sizeof(char): " << sizeof(char) << " byte" << endl;
    cout << "sizeof(float): " << sizeof(float) << " byte" << endl;
    cout << "sizeof(double): " << sizeof(double) << " byte\n" << endl;
    
    // Varie comparazioni di tipi di dato
    cout << "  Il maggiore tra int e double: " << max(var_int, var_dbl) 
        << " byte" << endl;
    cout << "  Il maggiore tra float e char: " << max(var_flt, var_chr) 
        << " byte" << endl;
    cout << "Il maggiore tra float e double: " << max(var_flt, var_dbl) 
        << " byte" << endl;
    cout << "    Il maggiore tra int e char: " << max(var_int, var_chr) 
        << " byte" << endl;
    cout << "   Il maggiore tra int e float: " << max(var_int, var_flt) 
        << " byte - int e float hanno le medesime dimensioni" << endl;
    cout << " Il maggiore tra double e char: " << max(var_dbl, var_chr) 
        << " byte" << endl;

    return(EXIT_SUCCESS);
}
