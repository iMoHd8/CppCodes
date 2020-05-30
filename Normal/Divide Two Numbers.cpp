#include <iostream>
using namespace std;
int main()
{
	int F, S, i = 0;

	cout << "Enter The First Number :" << endl;
	cin >> F;
	cout << "Enter The Second Number :" << endl;
	cin >> S;

	for (F = F; F > 0; i++)
	{
		F = F - S;
	}

	cout << "= " << i;
	


	return 0;
}
