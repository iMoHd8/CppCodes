#include <iostream>
using namespace std;

int main()
{
	int arr[5] , sum_even=0 , sum_odd=0;

	cout << "Enter 5 Values :" << endl;

	for (size_t i = 0; i < 5; i++)
	{
		cout << i + 1 << "/ ";
		cin >> arr[i];

		if (arr[i] % 2 == 0)
			sum_even += arr[i];

		else if (arr[i] % 2 == 1)
			sum_odd += arr[i];
	}

	cout << "The Sum Of Even Numbers = [" << sum_even << "]" << endl;
	cout << "The Sum Of Odd Numbers = [" << sum_odd << "]" << endl;




	return 0;
}