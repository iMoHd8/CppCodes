#include <iostream>
using namespace std;

int main()
{
	int array[6] = { 55,21,10,42,5,31 };
	int temp=0;

	//cout << "Enter 6 Numbers For Sort :" << endl;
	/*for (int i = 0; i < 6; i++)
	{
		cin >> array[i];
	}
	*/

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (array[i] < array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}

		}
	}

	for (int i = 0; i < 6; i++)
	{
		cout << array[i]<<" ";
	}
	cout << endl;
	int x;
	bool f = false;
	int n = 0;

	cout << "Enter Your Number:" << endl;
	cin >> x;

	for (int i = 0; i < 6; i++)
	{
		if (x == i+1)
		{
			f = true;
			n = array[i];
			break;
		}
	}

	if (f == true)
	{
		cout <<"Your Number That You Looking For = " << n << endl;
	}
	else
	{
		cout << "Sorry Your Entry is Wrong, Try Again please." << endl;
	}




	return 0;
}