#include <iostream>
using namespace std;

void triple_it(int *p);

int main() {
	int a = 5, b = 6;
	cout << "Value of a before tripling is " << a << endl << "Value of b before tripling is " << b << endl;
	triple_it(&a);
	triple_it(&b);
	cout << "Value of a after tripling is " << a << endl << "Value of b after tripling is " << b << endl;
	return 0;
}
void triple_it(int *p) {
	*p = *p * 3;
}
