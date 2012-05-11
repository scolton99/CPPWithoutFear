#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

int main() {
	int ip1,ip2,ip3,ip4;
	const char *filename = "iptable.txt";
	ofstream iptable(filename);
	cout << "IP Block 1: ";
	cin >> ip1;
	cout << endl << "IP Block 2: ";
	cin >> ip2;
	cout << endl << "IP Block 3: ";
	cin >> ip3;
	cout << endl << "IP Block 4: ";
	cin >> ip4;
	while(ip4 < 257){
		iptable << ip1 << "." << ip2 << "." << ip3 << "." << ip4 << ",";
		ip4++;
		if (ip4 == 256) {
			ip4 = 0;
			ip3++;
			if (ip3 == 256) {
				ip3 = 0;
				ip2++;
				if (ip2 == 256) {
					return 0;
				}
			}
		}
	}
}
