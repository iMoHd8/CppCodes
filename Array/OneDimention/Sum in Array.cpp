#include <iostream>
using namespace std;

int main()
{
	int arr[5], sum = 0;

	cout << "Please Enter 5 Values :" << endl;

	for (size_t i = 0; i < 5; i++)
	{
		cin >> arr[i];

		sum += arr[i];
	}

	cout << "SUM = " << sum << endl;



	return 0;
}