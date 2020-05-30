#include <iostream>
using namespace std;
int sqrt(int);

int main()
{
	double x;
	cout << "Enter The Value For Calculate The Sqrt :" << endl;
	cin >> x;

	cout << x << " ^ 1/2" << " = " << sqrt(x);

}

int sqrt(int a)
{
	if (a == 0 || a == 1)
		return a;
	else if (a > 1)
		return a * sqrt(a * 1 / 2);
}
