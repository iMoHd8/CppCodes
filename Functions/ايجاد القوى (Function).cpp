#include <iostream>
using namespace std;
int power(int, int);
int main()
{
	int x, y;

	cout << "Enter The Base :" << endl;
	cin >> x;
	cout << "Enter The Power :" << endl;
	cin >> y;

	cout <<x<<" ^ "<<y<<" = "<< power(x, y);
}

int power(int a, int b)
{
	if (b == 0)
		return 1;
	else if (a == 0)
		return 0;
	else if (b > 0)
		return a * power(a, b - 1);
}
