#include <iostream>
#include <string>
using namespace std;

int main()
{
	string pal;		// mamam
	bool chick = false;
	int i, j ,m=0;
	cin >> pal;

	cout << "\nThe String Before Editing = [" << pal << "]" << endl;
	for (i = 0 , j = pal.size() - 1; i < j; i++ , j--)
	{
		if (pal[i] == pal[j])
		{
			chick = true;
			break;
		}
		else if(pal[i] != pal[j])
		{
			pal[j] = pal[i];
		}
		if (pal[i] == pal[j])
		{
			chick = true;
			m++;
		}
		
		
	}
	
	if (chick)
		cout << "The String After Editing = [" << pal << "] Now is Palindrome" << endl;
	else
		cout <<pal << " Sorry . The string isn't Palindrome . " << endl;

	cout << "the Number of Edit = " << m << endl;



	return 0;
}