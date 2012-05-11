#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

void convert_to_upper(char *s);

int main() {
	char s[100];
	cout << "Enter string to convert and press ENTER: ";
	cin.getline(s, 99);

	convert_to_upper(s);
	cout << "The converted string is: " << endl;
	cout << s;

	return 0;
}

void convert_to_upper(char *s) {
	int i;
	int length = strlen(s);
	for (i = 0; i < length; i++)
		s[i] = toupper(s[i]);
}
