#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main() {
	char directory[1001];
	char filename[81];
	cout << "Enter a directory and press ENTER:";
	cin.getline(directory, 1000);
	cout << "Enter a file name and press ENTER:";
	cin.getline(filename, 80);
	strcat(directory, filename);
	ofstream file_out(directory);
	if (! file_out)  {
		cout << "File" << filename << " could not be opened.";
		return -1;
	}
	cout << "File " << filename << " was opened." << endl;
	file_out << "I am blaxxon," << endl << "the cosmic computer." << endl << "Fear me!";
	cout << "Text was written to the file " << filename;
	file_out.close();
	return 0;
}
