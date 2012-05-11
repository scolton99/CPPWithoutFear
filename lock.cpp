#include <iostream>
using namespace std;

int main() {
	int onenum=0, twonum=0, threenum=0;
	while (onenum<=39) {
		cout << onenum << "-" << twonum << "-" << threenum << endl;
		onenum++;
		if (onenum==40){
			twonum++;
			onenum=0;
			if (twonum==40){
				threenum++;
				twonum=0;
				if (threenum==40) {
					return 0;
				}
			}
		}
	}
}
