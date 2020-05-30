#include <iostream>
using namespace std;
int dive(int, int);

int main()
{
	int F, S;

	cout << "Enter The First Number :" << endl;
	cin >> F;
	cout << "Enter The Second Number :" << endl;
	cin >> S;

	cout << F << " / " << S << " = " << dive(F, S);
	
}

int dive(int x, int y)
{
	int m=0;
	if (x == 0)
		return 0;
	else if (y == 0)
		cout << "Error";

	if (x > 0)
	{
		for (x = x; x > 0; m++)
		{
			x = x - y;
		}
		return m;
	}

	else if (x < 0)
	{
		for (x = x; x < 0 ; m++)
		{
			x = x + y;
		}
		return m * -1;
	}
	
	
}
