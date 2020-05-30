#include <iostream>
#include <Windows.h> // For Sleep() Function.

using namespace std;

int main()
{
	int entery;

	cout << "Enter Any Interger Number ---> ";
	cin >> entery;

	cout << "\n\n\n\n\t\t\t\t[ Please Wait , The Pattern Process is Being Processed. ]" << endl;

	{
		Sleep(4000);
		system("cls");
		system("color 3");
	};

	for (int i = 1; i <= entery; i++) // ----> 1 ----> 2
	{
		for (int j = 1; j <= i; j++) // ----> 1 ----> 2
		{
			cout << j << " ";		// ----> will print 1 ----> will print 1 2
		}

		for (int j = i - 1; j >= 1; j--)
		{
			cout << j << " ";	// ----> will print nothing ----> will print 1
		}
		cout << endl; // ----> 1 ----> 1 2 1 ...
	}





	return 0;
}