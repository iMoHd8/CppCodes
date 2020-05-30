#include <iostream>
using namespace std;
int sume(int[]);
int sumo(int[]);

int main()
{
	int arr[5];

	cout << "Enter 5 Values :" << endl;

	for (size_t i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	cout << endl << "Sum of Even Numbers {";
	for (size_t j =	0; j < 5; j++)
	{
		if(arr[j]%2==0)
		cout << arr[j] << " " ;
	}
	cout << "} = " << sume(arr);

	cout << endl << "Sum of Odd Numbers {";
	for (size_t j = 0; j < 5; j++)
	{
		if(arr[j]%2==1)
		cout<< arr[j] <<"  ";
	}
	cout << "} = " <<  sumo(arr);
	

	return 0;
}

int sume(int x[])
{
	int counterE = 0;
	for (size_t i = 0; i < 5; i++)
	{
		if (x[i] % 2 == 0)
			counterE += x[i];
	}
	return counterE;
}

int sumo(int y[])
{
	int counterO = 0;
	for (size_t i = 0; i < 5; i++)
	{
		if (y[i] % 2 == 1)
			counterO += y[i];
	}
	return counterO;
}