#include <iostream>
using namespace std;

void c_f(double *n);

int main() {
	double f;
	cout << "Enter the Fahrenheit temperature and press ENTER: " << endl;
	cin >> f;
	c_f(&f);
	cout << "The Celsius temperature is: " << f;
}

void c_f(double *n) {
	*n = (*n - 32) / 1.8;
}
