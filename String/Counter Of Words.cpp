#include <iostream>
using namespace std;

int main()
{
	string s1;
	int c=0;
	
	cout<<"Please Enter Any Thing You Want : ";
	getline(cin,s1);
	cout<<endl;
	for(int i=0 ; s1[i]!='\0' ; i++)
	{
		if(s1[i] == ' ')
		{
			c++;
		}
		if(s1[i] >= 97)
		{
			s1[i] = s1[i]-32;
		}
		else if(s1[i] >= 65)
		{
			s1[i] = s1[i]+32;
		}
	}
	
	cout<<"Number of Words You Entered are : "<<c+1<<endl;
	cout<<"IN OTHER WAY : "<<s1;
	
	
	return 0;
}
