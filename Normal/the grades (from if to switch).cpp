#include <iostream>
using namespace std;
int main() {
	int g;

	cout << "PLEASE ENTER THE GRADE" << endl;
	cout << "THE GRADE = ";
	cin >> g;

	switch (g/10) {
	case 5: cout << "THE GRADE = D" << endl; break;
	case 6: cout << "THE GRADE = C" << endl; break;
	case 7: cout << "THE GRADE = B" << endl; break;
	case 8: cout << "THE GRADE = A" << endl; break;
	case 9:
	case 10: cout << "THE GRADE = A+" << endl; break;
	default: cout << "SORRY THE GRADE'S NOT IN RANGE, TRY AGAIN." << endl;
	}








	return 0;
}