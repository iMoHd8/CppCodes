#include <iostream>
using namespace std;
int main() {
	int i, j,n;

	for (i = 1; i <= 7; i++) {
		for (n = 1; n <= 7-i; n++)
			cout << " ";
		for (j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
		
	}
	for (i = 7; i >= 1; i--) {
		for (n = 7; n >= 1 + i; n--)
			cout << " ";
		for (j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}
	for (i = 1; i <= 7; i++)
	{
		for (j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}
	for (i = 7; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}










	return 0;
}
