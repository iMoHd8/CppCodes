#include <iostream>
using namespace std;
int max1(int, int);
int min1(int, int);

int main() {
	int max, x, min;
	cout << "enter 10 values :" << endl;
	cin >> x;
	max = x;
	min = x;

	for (int i = 1; i < 10; i++) {
		cin >> x;
		max= max1(x, max);
		min = min1(x, min);
	}
	cout << "the maximum value = " << max << endl;
	cout << "the mininum value = " << min<<endl;
	return 0;
}

int max1(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

int min1(int x, int y)
{
	if (x < y)
		return x;
	else
		return y;
}