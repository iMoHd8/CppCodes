#include <iostream>
using namespace std;

void swaparray(char x[][5] , char y[], int n1, int n2)
{
	
	for(int i=0 ; i<5 ; i++)
	{
		for(int j=0 ; j<5 ; j++)
		{
			y[i]=x[n1-1][j];
			x[n1-1][j]=x[n2-1][j];
			x[n2-1][j]=y[i];
		}
	}
}

int main()
{
	char array[5][5] = { {'A','B','C','D','E'}
						,{'F','G','H','I','J'}
						,{'K','L','M','N','O'}
						,{'P','Q','R','S','T'}
						,{'U','V','W','X','Y'}};
	char sw[5]={0};
	int n1,n2;
	bool n=0;
	cout<<"\t\tThe Matrix -BEFORE- Swapping :\n"<<endl;
	
	for(int i=0 ; i<5 ; i++)
	{
		cout<<"\t\t\t";
		cout<<"|";
		for(int j=0 ; j<5 ; j++)
		{
			cout<<array[i][j]<<" ";
		}
		cout<<"|";
		cout<<endl;
	}
	
	do
	{	
		cout<<"\n\nPlease Enter The Rows Numbers You Want Swap Between:\nFirst Row = ";
		cin>>n1;
		cout<<"Second Row = ";
		cin>>n2;
		
		if(n1 > 1 && n1 <5 || n2 >1 && n2<5)
			n=1;
			
	}while(n != 1);

	cout<<endl<<"\n\n\tThe Matrix -AFTER- Swapping (BETWEEN ROW -"<<n1<<"- AND ROW -"<<n2<<"-):"<<endl<<endl;
	
	swaparray(array,sw,n1,n2);
	
	for(int i=0 ; i<5 ; i++)
	{
		cout<<"\t\t\t";
		cout<<"|";
		for(int j=0 ; j<5 ; j++)
		{
			cout<<array[i][j]<<" ";
		}
		cout<<"|";
		if(i==n1-1 || i==n2-1)
			cout<<"<---";
		cout<<endl;
	}
	
	
	
	return 0;
}
