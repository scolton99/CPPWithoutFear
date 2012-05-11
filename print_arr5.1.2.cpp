#include <iostream>
using namespace std;

int main() {
	int i;
	double integer[6] = {10, 22, 13, 99, 4, 5};
	for(i = 0; i < 6; i++) {
		cout << integer[i] << " ";
	}
	cout << endl;
	cout << integer[2] + integer[1] + integer[0] + integer [3] + integer [4] + integer[5] << endl;
}
