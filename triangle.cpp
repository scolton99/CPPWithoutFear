#include <math.h>
#include <iostream>
using namespace std;
int triangle(int num);
int main() {
	int n;
	cout << "Enter a number and press ENTER: " << endl;
	cin >> n;
	cout << "Function returned " << triangle(n);
	return 0;
}
int triangle(int n) {
	int i;
	int sum=0;
	for (i = 1; i <= n; i++)
		sum += i;
	return sum;
}
