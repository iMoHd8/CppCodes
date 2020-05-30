#include <iostream>
using namespace std;

int main()
{
	int number[5],s;
	bool found = false;
	cout << "Please Enter 5 Numbers :" << endl;

	for (int i = 0; i < 5; i++)
	{	
		cin >> number[i];
	}
	cout << endl;

	cout << "Please Enter The Number That You Looking For :" << endl;
	cin >> s;
	cout<<endl;

	int i;

	for (i = 0; i < 5; i++)
	{
		if (s == number[i])
		{
			found = true;
			break;
		}
	}

	if (found)
		cout << s << " Does Exist in Position " << i << endl;
	else
		cout << s << " Does not Exist in Any Position" << endl;


	return 0;
}
