#include <iostream>
using namespace std;
int abs(int);
int main()
{
	int x;

	cin >> x;

	cout <<"The Abs = "<< abs(x);

}

int abs(int a)
{
	if (a > 0)
		return a;
	else if (a < 0)
		return a * -1;
	else
		cout << "Error" << endl;
}