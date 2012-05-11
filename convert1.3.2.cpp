/*
 * convert1.3.2.cpp
 *
 *  Created on: Jan 7, 2012
 *      Author: Spencer Dale Colton
 */
#include <iostream>
using namespace std;

int main() {
	double ftemp;

	cout << "Enter a Fahrenheit temp and press ENTER: ";
	cin >> ftemp;
	cout << "The Celsius temp is: " << (ftemp - 32) / 8;

	return 0;
}



