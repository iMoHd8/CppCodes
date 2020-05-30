#include<iostream>
using namespace std;
int main() {
	int i, m;


	for (i = 1; i <= 10; i++) {
		for (m = 1; m <= 10; m++) {
			if ((i == 1) && (m == 1 || m == 10))
				cout << "*";
			else if ((i == 2) && (m == 1 || m == 2 || m == 9 || m == 10))
				cout << "*";
			else if ((i == 3) && (m == 1 || m == 3 || m == 8 || m == 10))
				cout << "*";
			else if ((i == 4) && (m == 1 || m == 4 || m == 7 || m == 10))
				cout << "*";
			else if ((i == 5) && (m == 1 || m == 5 || m == 10))
				cout << "*";
			else if ((i == 6) && (m == 1 || m == 10))
				cout << "*";
			else if ((i == 7) && (m == 1 || m == 10))
				cout << "*";
			else if ((i == 8) && (m == 1 || m == 10))
				cout << "*";
			else if ((i == 9) && (m == 1 || m == 10))
				cout << "*";
			else if ((i == 10) && (m == 1 || m == 10))
				cout << "*";
			else
				cout<<" ";
		}
		cout << endl;
	}









	return 0;
}