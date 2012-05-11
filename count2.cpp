#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int i, n;
	cout << "Enter the starting number: " << endl;
	cin >> i;
	cout << "Enter the ending number: " << endl;
	cin >> n;
	for(; i <= n; i++)
		cout << i << " ";
	return 0;
}
