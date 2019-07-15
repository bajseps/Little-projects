#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string x;

	cout << "Enter a string and the program will reverse it and print it out." << endl;
	getline(cin, x);

	for (int i = x.length(); i >= 0; i--) {
		cout << x[i];
	}

	return 0;
}
