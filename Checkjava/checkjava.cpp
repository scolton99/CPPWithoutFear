#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <string>
#include <ctype.h>
using namespace std;

int checkforjava() {
	string path (getenv("PATH"));
	string find = "C:\\Program Files\\Java\\jdk1.";
	string find64 = "C:\\Program Files (x86)\\Java\\jdk1.";
	int length = path.length();
	for(int i = 0; i <= length; i++) {
		tolower(path[i]);
	}
	if ( (int) path.find(find) == string::npos && (int) path.find(find64) == string::npos) {
		cout << "Java JDK was not found on your computer.";
		cout << endl << "Press ENTER to exit.";
		cin.get();
		return -1;
	} else if (path.find(find) != string::npos || path.find(find64) != string::npos) {
		string find7 = "C:\\Program Files\\Java\\jdk1.7";
		string find764 = "C:\\Program Files (x86)\\Java\\jdk1.7";
		string find6 = "C:\\Program Files\\Java\\jdk1.6";
		string find664 = "C:\\Program Files (x86)\\Java\\jdk1.6";
		if (path.find(find7) != string::npos || path.find(find764) != string::npos) {
			cout << "Java JDK version 7 was found on your computer.";
			cout << endl << "Please note that the following may be true: " << endl << "Your Java JDK environment folder may no longer exist, however it remains in the PATH environment variable." << endl << "Your Java JDK environment folder may exist, and may exist in the PATH variable, but there may be no files in it." << endl << "Your Java JDK environment folder may exist, exist in the PATH variable, and have Java JDK files in it, but those files may be corrupted." << endl << endl << endl << endl << "Java is a registered trademark of Oracle.";
			cout << endl << "Press ENTER to exit.";
			cin.get();
			return 7;
		} else if (path.find(find6) != string::npos || path.find(find664) != string::npos) {
			cout << "Java JDK version 6 was found on your computer.";
			cout << endl << "Please note that the following may be true: " << endl << "Your Java JDK environment folder may no longer exist, however it remains in the PATH environment variable." << endl << "Your Java JDK environment folder may exist, and may exist in the PATH variable, but there may be no files in it." << endl << "Your Java JDK environment folder may exist, exist in the PATH variable, and have Java JDK files in it, but those files may be corrupted." << endl << endl << endl << endl << "Java is a registered trademark of Oracle.";
			cout << endl << "Press ENTER to exit.";
			cin.get();
			return 6;
		} else {
			cout << "An unknown Java JDK was found on your computer.";
			cout << endl << "Please note that the following may be true: " << endl << "Your Java JDK environment folder may no longer exist, however it remains in the PATH environment variable." << endl << "Your Java JDK environment folder may exist, and may exist in the PATH variable, but there may be no files in it." << endl << "Your Java JDK environment folder may exist, exist in the PATH variable, and have Java JDK files in it, but those files may be corrupted." << endl << endl << endl << endl << "Java is a registered trademark of Oracle.";
			cout << endl << "Press ENTER to exit.";
			cin.get();
			return 1;
		}
	}
	return 0;
}
