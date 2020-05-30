#include <iostream>
using namespace std;

int main()
{
	int n, s;
	
	cin >> n;

	s = n / 2;

	for (int i = 1; i <= n; i+=2)
	{
		for (int j = 1; j <= s; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
		s--;
	}
	s = 1;
	for (int i = n-2; i >= 1; i-=2)
	{
		for (int j = 1; j <= s; j++)
		{
			cout << " ";
		}

		for (int k = 1; k <= i; k++)
		{
			cout << "*";
		}
		cout << endl;
		s++;
	}






}