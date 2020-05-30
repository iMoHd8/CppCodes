#include <iostream>
using namespace std;

struct student
{
	string name;
	int age;
	float avg;
};

int main()
{
	student array[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter Your Name -->";
		cin >> array[i].name;
		cout << "Enter Your Age -->";
		cin >> array[i].age;
		cout << "Enter Your Avg -->";
		cin >> array[i].avg;
	}

	float max = array[0].avg;
	int asmm = 0;
	for (int i = 0; i < 5; i++)
	{
		if (array[i].avg > max)
		{
			max = array[i].avg;
			asmm++;
		}
		
	}

	cout << "AVG = " << max << endl << "THE NAME =" << array[asmm].name << endl;





	return 0;
}