#include <iostream>
using namespace std;
int Max(int[]);
int Min(int[]);
int main()
{
	int arr[5];

	cout << "Enter 5 Values :" << endl;
	for (size_t i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	cout << endl <<  "The Maximum = " << Max(arr);
	cout << endl << "The Minimum = " << Min(arr);

	return 0;
}

int Max(int x[])
{
	int F = x[0];

	for (size_t i = 0; i < 5; i++)
	{
		if (x[i] > F)
			F = x[i];
	}
	return F;
}

int Min(int y[])
{
	int M = y[0];

	for (size_t i = 0; i < 5; i++)
	{
		if (y[i] < M)
			M = y[i];
	}
	return M;
}