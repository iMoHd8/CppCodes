#include <iostream>
using namespace std;
double sum(int[]);

int main()
{
	int arr[7];
	cout << "Enter 7 Values :" << endl;
	for (size_t i = 0; i < 7; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	cout << "Sum = " << sum(arr) << endl;
	cout << "Average = " << static_cast<double>(sum(arr) / 7) << endl;


	return 0;
}

double sum(int x[])
{
	int counter = 0;

	for (size_t i = 0; i < 7; i++)
	{
		counter += x[i];
	}

	return counter;
}