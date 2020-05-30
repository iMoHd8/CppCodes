#include <iostream>
using namespace std;
int main() {
	int i, j;

	for (i = 1; i <= 11; i++)
	{
		for (j = 1; j <= 11; j++)
		 {

			if (i == 1 || i == 11 || i == j || i + j == 12 )
			{
				cout << "*";
			}
			else
			{
				cout <<" ";
			}
	
		}
		
		
		
		cout << endl;
	}














	return 0;
}
