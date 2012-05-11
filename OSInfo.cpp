#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	cout << "Computer Specifications: " << endl << endl << "OS: " << getenv("OS") << endl << "Brand: " << getenv("PCBRAND") << endl << "Processor Architecture: " << getenv("PROCESSOR_ARCHITECTURE") << endl << "Processor Identifier: " << getenv("PROCESSOR_IDENTIFIER") << endl << "Processor Level: " << getenv("PROCESSOR_LEVEL") << endl << "Processor Revision: " << getenv("PROCESSOR_REVISION") << endl;
	return 0;
}
