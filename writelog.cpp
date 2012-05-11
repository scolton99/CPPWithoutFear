#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;

int main () {
	fstream logfile;
	fstream typefile;
	size_t n;
	size_t end = "**a";
	char* s[2001]
	logfile.open("errors.log");
	if (typefile.is_open) {
		cout << "Please type a line of text to add to the file, or type "**a" to end." << endl;
		cin.getline(n);
		if (! strcmp(tolower(n),end)) {
			return 0;
		}
		typefile.write(n);
		if (! strcmp(typefile.read(s, n.strlen), n)) {
			cout << "ERROR! Check logfile for more information." << endl;
			logfile.write("The file could not be written to, or was incorrectly written");
			return 0;
		}
		logfile.write("The file was written to successfully");
		return 0;
	}
}