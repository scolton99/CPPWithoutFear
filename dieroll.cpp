#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int main() {
	int i=0;
	int g=0;
	cout << "Number of times: " << endl;
	cin >> i;
	for(g = 1;g <= i;g++) {
		srand(time(NULL));
		cout << (rand() % 6) + 1 << endl;
		Sleep(1000);
	}
	return 0;
}
