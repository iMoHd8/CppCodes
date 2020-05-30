#include <iostream>
using namespace std;

int main()
{
	int arr[5], mult = 1;

	cout << "Please Enter 5 Values :" << endl;

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];

		mult *= arr[i];
	}

	cout << "MULTI = " << mult << endl;




	return 0;
}