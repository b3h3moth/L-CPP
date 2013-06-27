#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;


int main() {
    string line;

    // Si apre un file in lettura
    ifstream in_file;
    in_file.open("/etc/passwd");
    // Equivalente: ifstream out_file("/etc/passwd");

    // Si verifica l'assenza di errori
    if (!in_file) {
        cerr << "File non trovato" << endl;
        exit(EXIT_FAILURE);
    }

    // Si legge la prima riga del file /etc/passwd
    in_file >> line;
    cout << line << endl;

    // Si legge il resto del file 
    while (in_file >> line) 
        cout << line ;
    
    // Si chiude lo strem
    in_file.close();

    return(EXIT_SUCCESS);
}
