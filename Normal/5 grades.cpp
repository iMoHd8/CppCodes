#include<iostream>
using namespace std;
int main()
{
	
	int avg,sum=0,m;

	cout << "Enter the grades :" << endl;
	for (int i = 1; i <= 5; i++)
	{
		cout << i << "- ";
		cin >> m;
		sum += m;
	}
	
	avg = sum / 5;

	switch (avg/10)
	{
	case 10:
	case 9:	cout << "THE GRADE = " << avg << "%" << endl << "THE GRADE = A+" << endl; break;
	case 8: cout << "THE GRADE = " << avg << "%" << endl << "THE GRADE = A" << endl; break;
	case 7: cout << "THE GRADE = " << avg << "%" << endl << "THE GRADE = B" << endl; break;
	case 6: cout << "THE GRADE = " << avg << "%" << endl << "THE GRADE = C" << endl; break;
	case 5: cout << "THE GRADE = " << avg << "%" << endl << "THE GRADE = D" << endl; break;
	default: cout << "THE GRADE = " << avg << "%" << endl << "THE GRADE = F" << endl;

	}









	return 0;
}