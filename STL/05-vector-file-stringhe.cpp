#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    string file_name;
    cout << "enter file name: " ;
    cin >> file_name;

    // Apre il file in lettura
    ifstream infile(file_name.c_str(), ios::in);

    if (!infile) {
    	cerr << "oopppps, unable to pen file " << file_name << "!\n";
	return (-1);
    } else 
    	cout << '\n';

    vector<string> *lines_of_text = new vector<string>;
    string textline;

    int linenum = 0;

    while(getline(infile, textline, '\n')) {
    	cout << "[" << linenum << "] " << textline << '\n';

	lines_of_text->push_back(textline);
	linenum++;
    }

    return(0);
}
