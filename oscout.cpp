#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main() {
	const char *osver;
	const char *winnt;
	winnt = "Windows_NT";
	osver = getenv("OS");
	if (strcmp(osver, winnt) == 0)
		cout << "Your computer is Windows NT based.";
	else
		cout << "Operating system base unknown. Base: " << osver;
	return 0;
}
