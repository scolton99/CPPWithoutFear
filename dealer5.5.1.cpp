#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

int rand_0toN1(int n);
void pick_an_obj();
int select_next_available(int n);

const char *objs[2] = {"Ball", "Cube"};
const char *colors[4] = {"Red", "Blue", "Orange", "Green"};

int obj_drawn[8];
int objs_remaining = 8;

int main() {
	int n, i;

	srand(time(0));

	while (1) {
		cout << "Enter number of objects to pull (0 to exit): ";
		cin >> n;
		if (n == 0)
			break;
		for (i = 1; i <=n; i++)
			pick_an_obj();

	}
	return 0;
}

void pick_an_obj() {
	if (objs_remaining == 0) {
		cout << "Replacing..." << endl;
		objs_remaining = 8;
		for (int i = 0; i < 8; i++)
			obj_drawn[i] = false;
	}
	int o, c, color, n;
	n = rand_0toN1(objs_remaining--);
	color = select_next_available(n);
	c = color % 4;
	o = color / 4;
	cout << objs[o] << " of " << colors[c] << endl;
}

int select_next_available(int n) {
	int i = -1;
	n++;
	while (n-- > 0) {
		i++;
		while (obj_drawn[i])
			i++;
	}
	obj_drawn[i] = true;
	return i;
}

int rand_0toN1(int n) {
	return rand() % n;
}
