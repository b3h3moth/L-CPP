#include <iostream>
#include <cstdlib>

class Test
{
    public:
        Test(int x) { val = x; }
        
        /* Costruttore per delega, in questo caso la delega e' riferita al
        costruttore 1 */
        Test() : Test(100) {}

    private:
        int val;
};

int main(void) {

    return(EXIT_SUCCESS);
}
