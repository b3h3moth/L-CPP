#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

/* L'header <fstream> contiene tutte le dichirazioni necessarie per lavorare con
i file, definisce peraltro i tipi di dato ifstream, ofstream, e fstream, per 
poter lavorare coi file infatti deve essere prima di tutto definito un oggetto 
di uno dei tre tipi.


int main() {
    // Si apre il file, se non esiste lo crea
    ofstream out_file("db.txt", ios::out);

    if (!out_file) {
        cerr << "File non trovato" << endl;
        exit(EXIT_FAILURE);
    }

    cout << "nome, cognome, eta': " << endl;
    int age;
    char name[10];
    char surname[10];

    while (cin >> name >> surname >> age) {
        out_file << name << ' ' << surname << ' ' << age << endl;
        cout << "; ";
    }

    return(EXIT_SUCCESS);
}
