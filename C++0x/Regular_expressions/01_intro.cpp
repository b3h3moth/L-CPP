#include <iostream>
#include <cstdlib>
#include <string>
#include <regex>
using namespace std;

/* Anzitutto e' necessario inserire l'header <regex> per poter lavorare con
le espressioni regolari. */

int main() {
    regex test("[0-9]+");
    
    if (regex_match("178278", test)) {
        cout << "Corrispondenza trovata" << endl;
    }
    
    return(EXIT_SUCCESS);
}
