#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string x;
	bool palindrome = true;

	cout << "Enter a string and the program will check, if it's a palindrome." << endl;
	getline(cin, x);

	int b = x.length() - 1;

	int i = x.length() / 2;
	for (int a = 0; a < i; a++) {
		if (x[a] == x[b]) {
			b--;
		}
		else {
			palindrome = false;
			break;
		}
	}

	if (palindrome) {
		cout << "The word IS a palindrome." << endl;
	}
	else {
		cout << "The word is NOT a palindrome." << endl;
	}

	return 0;
}
