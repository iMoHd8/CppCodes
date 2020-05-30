#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	int i, comp;
	string player1;
	cout << "PLAYER 1 : ";
	cin >> player1;

	do {
		cout << player1 << " Take A Choice...(1 = rock) - (2 = paper) - (3 = scissor)" << endl;
		do
		{
			cin >> i;
			cout << "Wrong Choice...! Take A Choise Again." << endl;
		} while (i < 1 || i > 3);

		system("cls");
		system("color a");
		switch (i)
		{
		case 1: cout << "You Choice { Rock...! }" << endl; break;
		case 2: cout << "You Choice { Paper...! }" << endl; break;
		case 3: cout << "You Choice { Scissor...! }" << endl; break;
		default:
			break;
		}


		unsigned seed = time(0);
		srand(seed);

		comp = rand() % 3 + 1;

		switch (comp)
		{
		case 1: cout << "I Choice [ Rock...! ]" << endl; break;
		case 2: cout << "I Choice [ Paper...! ]" << endl; break;
		case 3: cout << "I Choice [ Scissor...! ]" << endl; break;
		default:
			break;
		}

		cout << endl;


		if (i == comp)
			cout << "It's a tie..! let's Do it Again" << endl;
		else if (i == 1 && comp == 3)
			cout << "Congrats You Wins.!" << endl;
		else if (i == 2 && comp == 1)
			cout << "Congrats You Wins.!" << endl;
		else if (i == 3 && comp == 2)
			cout << "Congrats You Wins.!" << endl;
		else
			cout << "Computer Wins.! ... Mybee Anothe Time You'll Win :)" << endl;
	} while (i == comp);


	return 0;
}