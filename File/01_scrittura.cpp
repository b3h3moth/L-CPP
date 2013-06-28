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
di uno dei tre tipi e linkato al file.
*/


int main() {
    int age;
    char name[10];
    const string lang = "C++";

    // Si crea un file all'interno del quale scrivere dei dati.
    ofstream out_file;
    out_file.open("db.txt");
    // Equivalente: ofstream out_file("db.txt");

    // Si verifica l'assenza di errori
    if (!out_file) {
        cerr << "File non trovato" << endl;
        exit(EXIT_FAILURE);
    }

    // Si scrive sul file utilizzando l'operatore di inserimento
    out_file << lang << " language programming, file" << endl;

    cout << "nome: " ;
    cin >> name;

    // Si scrive dopo aver ricevuto dati in input
    out_file << name << endl;
    
    // Si chiude lo strem
    out_file.close();

    return(EXIT_SUCCESS);
}
