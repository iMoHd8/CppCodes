#include <iostream>
using namespace std;
void sort(int[]);
void ww(int[]);

int main()
{
	int arr[7];

	cout << "Enter Any 7 Values :" << endl;

	for (size_t i = 0; i < 7; i++)
	{
		cin >> arr[i];
	}

	sort(arr);
	ww(arr);

}

void sort(int x[])
{
	int temp = 0 , i , j;

	for (i = 0; i < 7 - 1; i++)
	{
		for (j = 0; j < 7 - 1; j++)
		{
			if (x[j] > x[j + 1])
			{
				temp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = temp;
			}
		}
	}
	

}

void ww(int ww[])
{
	cout << "The Sort Of Values = ";
	for (size_t i = 0; i < 7; i++)
	{
		cout <<"[" << ww[i] << "]";
	}
}





