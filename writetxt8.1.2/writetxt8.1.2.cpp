#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main() {
	char txtline[1001], directory[1001], filename[81];
	cout << "Enter a directory name and press ENTER: " << endl;
	cin.getline(directory, 1000);
	cout << "Enter a file name an press ENTER: " << endl;
	cin.getline(filename, 1000);
	strcat(directory, filename);
	ofstream file(directory);
	if (! file) {
		cout << "The file, " << filename << " could not be opened.  Please restart the program. " << endl;
		return 0;
	}
	cout << "The file was opened successfully." << endl;
	while(1) {
		cout << "Enter a line of text (limit 1000 char) or type @@@ to exit and press ENTER: " << endl;
		cin.getline(txtline, 1000);
		if (! strcmp(txtline, "@@@"))
			break;
		file << txtline << endl;
		cout << "The line was written to the file." << endl;
	}
	return 0;
}
