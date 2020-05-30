#include <iostream>
using namespace std;

int main()
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i < 10)
			cout << "0";
		if (i % 10 == 1)
			cout << endl;
		cout << i << " ";
		
	}

	return 0;
}