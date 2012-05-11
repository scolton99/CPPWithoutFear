#include <time.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {
	srand(time(NULL));
	int i = 1;
	while (i < 10) {
		cout << rand() % 2283 << endl;
		i++;
	}
	return 0;

}
