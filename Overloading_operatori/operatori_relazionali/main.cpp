#include <iostream>
#include <cstdlib>
using namespace std;

#include "Date.h"

int main() {
    Date brother(28,11,1969);
    Date father(10,9,1925);
    Date mum(17,11,1948);
    Date me(31,3,1973);
    Date me2(31,3,1973);

    if (brother > me)
        cout << "brother > me" << endl;
    else
        cout << "brother < me" << endl;
    
    if (mum < father)
        cout << "mum < father" << endl;
    else
        cout << "mum > father" << endl;

    if (father == mum)
        cout << "father == mum" << endl;
    else
        cout << "father != mum" << endl;

    if (me == me2) 
        cout << "me == me2" << endl;
    else
        cout << "me != me2" << endl;
    
    return(EXIT_SUCCESS);
}
