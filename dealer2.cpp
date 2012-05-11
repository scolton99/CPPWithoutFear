#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int rand_0toN1(int n);
void draw_a_card();

const char *suits[4] = {"Hearts", "Diamonds", "Spades", "Clubs"};
const char *ranks[13] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

int main() {
	int n, i;

	srand(time(0));

	while (1) {
		cout << "Enter number of cards to draw (0 to exit): " << endl;
		cin >> n;
		if (n == 0)
			break;
		for (i = 1; i <= n; i++)
			draw_a_card();
	}
	return 0;
}

void draw_a_card() {
	int r, s, card;
	card = rand_0toN1(52);
	r = card % 13;
	s = card / 13;
	cout << ranks[r] << " of " << suits[s] << endl;
}

int rand_0toN1(int n) {
	return rand() % n;
}
