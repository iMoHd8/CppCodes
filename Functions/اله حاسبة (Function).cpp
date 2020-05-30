#include <iostream>
using namespace std;
int Plus(int, int);
int Minus(int, int);
int Mult(int, int);
int Div(int, int);

int main() {
	int f, s;
	char oper;

	cout << "Enter The First Number :" << endl;
	cin >> f;
	cout << "Enter The Operition : (+,-,*,/)" << endl;
	cin >> oper;
	cout << "Enter The Second Number :" << endl;
	cin >> s;

	switch (oper)
	{
	case '+': cout << Plus(f,s); break;
	case '-': cout << Minus(f,s); break;
	case'*': cout << Mult(f, s); break;
	case'/': cout << Div(f, s); break;
	default: cout << "error in operition :(";
	}
}

int Plus(int x, int y) {
	cout << x << " + " << y << " = ";
	return x + y;
}

int Minus(int x, int y) {
	cout << x << " - " << y << " = ";
	return x - y;
}

int Mult(int x, int y) {
	cout << x << " * " << y << " = ";
	return x * y;
}

int Div(int x, int y) {
	if (y == 0) {
		cout << "error";
		return 0;
	}
	else
		cout << x << " / " << y << " = ";
		return x / y;
}
