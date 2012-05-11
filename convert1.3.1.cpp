/*
 * convert1.3.1.cpp
 *
 *  Created on: Jan 7, 2012
 *      Author: Spencer Dale Colton
 */
#include <iostream>
using namespace std;

int main() {
	double ctemp, ftemp;

	cout << "Enter a Fahrenheit temp and press ENTER: ";
	cin >> ftemp;
	ctemp = (ftemp - 32) / 1.8;
	cout << "The Celsius temp is: " << ctemp;

	return 0;
}




