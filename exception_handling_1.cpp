 #include <iostream>
using namespace std;

int main()
{
    int a;
	try {
	throw 899;
	}
	catch (int x) {
		cout << "Caught " << x;
	}
	catch (...) {
		cout << "Default Exception\n";
	}
	return 0;
}
