#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>
using namespace std;

int rand_0toN1(int n);
void pick_an_obj();

const char *objs[2] = {"Ball", "Cube"};
const char *colors[4] = {"Red", "Blue", "Orange", "Green"};

int main() {
	int n, i;

	srand(time(NULL));

	while (1) {
		cout << "Enter number of objects to draw (0 to exit): " << endl;
		cin >> n;
		if (n == 0)
			break;
		for (i = 1; i <= n; i++)
			pick_an_obj();
	}
	return 0;
}

void pick_an_obj() {
	int o, c;
	o = rand_0toN1(2);
	c = rand_0toN1(4);
	cout << objs[o] << " of color " << colors[c] << endl;
}

int rand_0toN1(int n) {
	return rand() % n;
}
