#include <iostream>
using namespace std;

int main()
{
	string str;
	int ioeua;
	cin>>str;
	bool c=false;
	
	for(int i=0 , j=str.size()-1 ; i<j ; i++ , j--)
	{
		if(str[i] != str[j])
		{
			c=false;
			break;
		}
		else
		{
			c=true;
		}
	}
	if(c)
	cout<<"Correct, The String is Palindrome."<<endl;
	else
	cout<<"Sorry, The String isn't Palindrome.'"<<endl;
	
	
	
	
	
	return 0;
}
