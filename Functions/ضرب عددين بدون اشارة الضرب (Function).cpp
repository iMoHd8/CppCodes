#include <iostream>
using namespace std;
int multi(int, int);
int main()
{
	int x, y;

	cin >> x >> y;

	cout << multi(x, y) << endl;
	
}

int multi(int a, int b) {

	if (b == 0)
		return 0;
	else if (b > 0)
		return a + multi(a , b - 1);
}
