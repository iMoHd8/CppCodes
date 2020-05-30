#include <iostream>
using namespace std;

int main()
{
	char array[5][5] = {' '};
	
	for(int i=0 ; i<5 ; i++)
	{
		for(int j=4 ; j>=0 ; j--)
		{
			if(i+j==4)
			 array[i][j]='x';
		}
	}
	
	for(int i=0 ; i<5 ; i++)
	{
		for(int j=0 ; j<5 ; j++)
		{
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	
	
	
	return 0;
}
