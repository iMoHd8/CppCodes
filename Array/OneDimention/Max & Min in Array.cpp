#include <iostream>
using namespace std;

int main()
{
	long arr[5] = {50 , 150 , 310 , 22 , 105} , max=arr[0] , min=arr[0];
	
	for (int i = 0; i < 5 ; i++)
	{		
		if (arr[i] > max)
		{
			max = arr[i];
		}
		
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}

	cout << "MAXIMUM = " << max << endl;
	cout << "MINIMUM = " << min << endl;


	return 0;
}
