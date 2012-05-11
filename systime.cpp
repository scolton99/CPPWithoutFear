#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	while(1) {
	cout << asctime(localtime(&t));
	system("CLS");
	}
}