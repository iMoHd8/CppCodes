#include <iostream>
using namespace std;

int main()
{
	char array[10][10] = {' '};
	
	for(int i=0 ; i<10 ; i++)
	{
		for(int j=0 ; j<10 ; j++)
		{
			if(i==j || i+j==9 || i==0 || i==9 || j==0 || j==9)
			{
				array[i][j]='x';
			}
		}
	}
	
	for(int i=0 ; i<10 ; i++)
	{
		for(int j=0 ; j<10 ; j++)
		{
			cout<<array[i][j]<<" ";
		}
	cout<<endl;
	}
	
	
	
	return 0;
}
