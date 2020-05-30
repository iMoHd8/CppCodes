#include <iostream>
using namespace std;

int main()
{
	int array[10], array2[10];

	cout << "Enter 10 Numbers :" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> array[i];
	}

	cout << endl;
	int m = 0;

	for (int i = 9; i >= 0; i--)
	{
		array2[i] = array[m];
		m++;
	}

	cout << "The Reverse Process :" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << array2[i] << endl;
	}




	return 0;
}