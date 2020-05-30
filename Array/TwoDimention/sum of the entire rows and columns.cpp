#include <iostream>
using namespace std;

void sumarray(int x[][5] , int y[] , int z[])
{
	for(int i=0 ; i<5 ; i++)
	{
		for(int j=0 ; j<5 ; j++)
		{
			y[i] += x[i][j];
			z[i] += x[j][i];
		}
	}
	
}

int main()
{
	int array[5][5] = {1,2,3,4,5,10,20,30,40,50,5,10,15,20,25,10,10,10,10,10};
	int array1[5] = {0};
	int array2[5] = {0};
	
	sumarray(array,array1,array2);
	
	for(int i=0 ; i<5 ; i++)
	{
		for(int j=0 ; j<5 ; j++)
		{
			cout<<array[i][j]<<"\t";	
		}
		cout<<"|"<<array1[i]<<"|";
		cout<<endl;
	}
	cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
	
	for(int i=0 ; i<5 ; i++)
	{
		cout<<"|"<<array2[i]<<"|\t";
	}
	
	
	
	return 0;
}
