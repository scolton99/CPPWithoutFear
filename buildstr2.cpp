#include <iostream>
#include <string>
using namespace std;

int main() {
	string str, name, addr, work;
	cout << "Enter name and press ENTER: ";
	getline(cin, name);
	cout << "Enter address and press ENTER: ";
	getline(cin, addr);
	cout << "Enter workplace and press ENTER: ";
	getline(cin, work);
	str = "\nMy name is " + name + ", I live at " + addr + ",\nand I work at " + work + ".\n";
	cout << str;

	return 0;
}
