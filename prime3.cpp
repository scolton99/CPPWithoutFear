#include <iostream>
#include <math.h>
using namespace std;
int prime(int n);
int main() {
	int i;
	while (1) {
		cout << "Enter a number (0 to exit): ";
		cout << "and press ENTER:" << endl;
		cin >> i;
		if (i == 0)
			break;
		if (prime(i))
			cout << i << " is prime" << endl;
		else
			cout << i << " is not prime" << endl;
	}
	return 0;
}

int prime(int n){
	int i;
	for (i = 2; i <= sqrt((double)n); i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}
