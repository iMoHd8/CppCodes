#include <iostream>
using namespace std;
void swap(int& , int&);

int main()
{
	char a, b;

	cout << "Enter Two Values For Swapping :" << endl;
	cin >> a >> b;
	cout << endl;


	swap(a, b);
	cout << "Swapping Process is Successful : \n";
	cout << a << "\n" << b;

}

void swap(int &x, int &y)
{
	int z;

	z = x;
	x = y;
	y = z;
}
