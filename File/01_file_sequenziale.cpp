#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

/* L'header <fstream> contiene tutte le dichirazioni necessarie per lavorare con
i file, definisce peraltro i tipi di dato: 
- ifstream, input file stream, apre un file esistente e legge il contenuto;
- ofstream, output file stream, crea un file in cui scrivere; 
- fstream, file stream; apre un file per lettura, scrittura o entrambi.

Nota: per poter lavorare coi file deve essere prima di tutto definito un oggetto
di uno dei tre tipi.
*/


int main() {
    int age;
    char name[10];
    char surname[10];

    // Si crea un file all'interno del quale scrivere dei dati.
    ofstream out_file("db.txt", ios::out);

    // Si verifica l'assenza di errori
    if (!out_file) {
        cerr << "File non trovato" << endl;
        exit(EXIT_FAILURE);
    }

    cout << "nome, cognome, eta': " << endl;

    while (cin >> name >> surname >> age) {
        out_file << name << ' ' << surname << ' ' << age << endl;
        cout << "; ";
    }

    return(EXIT_SUCCESS);
}
