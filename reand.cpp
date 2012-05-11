#include <iostream>
#include <time.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main() {
	srand(time(NULL));
	cout << rand() % 10;
	return 0;
}
