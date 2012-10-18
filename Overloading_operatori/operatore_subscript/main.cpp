#include <iostream>
#include <cstdlib>
using namespace std;

#include "IntArray.h"

int main() {
    const int SIZE = 5;

    IntArray obj(SIZE);

    for(int i=0; i<SIZE; i++)
        obj[i] = i + i;

    for(int i=0; i<SIZE; i++)
        cout << obj[i] << endl;
    
    return(EXIT_SUCCESS);
}
