//The counting occurrence algorithm is referenced from: https://www.programiz.com/cpp-programming/examples/frequency-character
//The indices algorithm is referenced from: https://www.geeksforgeeks.org/find-indices-of-all-occurrence-of-one-string-in-other/
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
void Index(string input, char index) {
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == index) {
			cout << i << " ";
		}
	}
}
int main() {
	ifstream filein;
	char input;
	int charfreq = 0;
	string readin;
	cout << "Opening file input.txt" << endl;
	filein.open("input.txt");
	if (!filein.is_open()) {
		cout << "Error in opening file" << endl;
		return 1;
	}
	else {
		cout << "The file is opened." << endl;
		getline(filein, readin);
		cout << "Enter the character you want to search: ";
		cin >> input;
		bool flag = false;
		for (int i = 0; i < readin.size(); i++) {
			if (readin[i] == input) {
				++charfreq;
				flag = true;
			}
		}	
		cout << "\nThe number of occurences is: " << charfreq << endl;
		if (flag = true) {
			cout << "\nThe charater appear at: ";
			Index(readin, input);
		}
		filein.close();
		return 0;
	}
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
