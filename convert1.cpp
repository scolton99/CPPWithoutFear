/*
 * convert1.cpp
 *
 *  Created on: Jan 7, 2012
 *      Author: Spencer Dale Colton
 */
#include <iostream>
using namespace std;

int main() {
	double ctemp, ftemp;

	cout << "Input a Celsius temp and press ENTER: ";
	cin >> ctemp;
	ftemp = (ctemp * 1.8) + 32;
	cout << "Fahrenheit temp is: " << ftemp;

	return 0;
}




