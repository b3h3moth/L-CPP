#include <string>
using namespace std;

class Linux {
    public:
    	Linux(string kernel = "linux", string distro = "debian");

    	void setSystem(string os_name, string distro_name);
	void print();

    private:
    	string my_kernel;
	string my_distro;
};
