#include <iostream>
using namespace std;

int main()
{
	int arr[5] /*= { 10 , 15 , 25 , 5 , 30 }*/, sum = 0, avg , i;

	cout << "Enter 5 Values :" << endl;

	for (i = 0; i < 5 ; i++)
	{
		cin >> arr[i];

		sum += arr[i];
	}

	avg = sum / i;  //áíÓ arr[i] áÇääÇ äÑíÏ ÚÏÏ ÇáÇÚÏÇÏ İŞØ
	cout <<"THE AVERAGE = "<< avg << endl;




	return 0;
}