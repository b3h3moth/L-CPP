#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

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
