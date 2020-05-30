#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	for (int d = 0; d < 100; d++)
	{
		for (int h = 0; h < 24; h++)
		{
			for (int m = 0; m < 60; m++)
			{
				for (int s = 0; s < 60; s++)
				{
					system("cls");
					cout << " " << d << ": " << h << ": " << m << ": " << s;
					Sleep(930);
					
				}
			}
		}
	}
	return 0;
}