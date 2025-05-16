#include <iostream>
using namespace std;

bool equals(int first, int second);

int main() {
	int first, second;

	cout << "Input your first numbers: ";
	cin >> first;


	do {
		cout << "Input your second numbers:";
		cin >> second;
	} while (second < 0);

		cout << "Result: " << (equals(first, second) ? "yes" : "no") << endl;

	return 0;
}