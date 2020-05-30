#include<iostream>
using namespace std;
int main() {
	int f, s, z=0;

	cout << "Enter The First Number :" << endl;
	cin >> f;
	cout << "Enter The Second Number :" << endl;
	cin >> s;

	for (s = s; s > 0; s--) {
		
		z = z + f;

	}
	cout <<f<<" * "<<s<<" = "<< z;



	return 0;
}