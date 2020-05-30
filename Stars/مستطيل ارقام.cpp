#include<iostream>
using namespace std;
int main() {
	int i, j;
	
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 9; j++) {
			if (i == 1)
				cout <<j<<" ";
			else if (j == 1)
				cout <<i;
			else if (i == 5)
				cout <<" "<<j;
			else if (j == 9)
				cout <<"        "<<i;
			else
				cout <<" ";

		}
		cout << endl;
	}












	return 0;
}