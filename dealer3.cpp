#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

int rand_0toN1(int n);
void draw_a_card();
int select_next_available(int n);

const char *suits[4] = {"Hearts", "Diamonds", "Spades", "Clubs"};
const char *ranks[13] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

int card_drawn[52];
int cards_remaining = 52;

int main() {
	int n, i;

	srand(time(0));

	while (1) {
		cout << "Enter number of cards to draw (0 to exit): ";
		cin >> n;
		if (n == 0)
			break;
		for (i = 1; i <=n; i++)
			draw_a_card();

	}
	return 0;
}

void draw_a_card() {
	if (cards_remaining == 0) {
		cout << "Reshuffling..." << endl;
		cards_remaining = 52;
		for (int i = 0; i < 52; i++)
			card_drawn[i] = false;
	}
	int r, s, card, n;
	n = rand_0toN1(cards_remaining--);
	card = select_next_available(n);
	r = card % 13;
	s = card / 13;
	cout << ranks[r] << " of " << suits[s] << endl;
}

int select_next_available(int n) {
	int i = -1;
	n++;
	while (n-- > 0) {
		i++;
		while (card_drawn[i])
			i++;
	}
	card_drawn[i] = true;
	return i;
}

int rand_0toN1(int n) {
	return rand() % n;
}
