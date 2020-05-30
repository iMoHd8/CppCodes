#include <iostream>
using namespace std;

void arrayswap(int x[][5] , int y[] , int n1 , int n2)
{
	for(int i=0 ; i<5 ; i++)
	{
		for(int j=0 ; j<5 ; j++)
		{
			y[i] = x[n1-1][j];
			x[n1-1][j] = x[j][n2-1];
			x[j][n2-1]= y[i];
		}
	}
	
}

int main()
{
	int array[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
	int array1[5] = {0} , x , y;
	
	cout<<"The Original Matrix :"<<endl;
	for(int i=0 ; i<5 ; i++)
	{
		for(int j=0 ; j<5 ; j++)
		{
			if(array[i][j] < 10)
			{
				cout<<"0";
			}
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	

	cout<<"-------------------------"<<endl;
	
	cout<<"Please Enter Any Row Number You Want : ";
	cin>>x;
	cout<<"Please Enter Any Column Number You Want : ";
	cin>>y;
		
	system("cls"); //For Go To Another Screen.
	
	cout<<"\n\n"<<"The Swapping Process Between Row -"<<x<<"- and Column -"<<y<<"- is Successful."<<endl;
	
	system("pause"); //For Pause Some while then press any Button To Keep going.
	system("color 2"); //For Change The Color To Green.
	
	cout<<endl<<"The Matrix After Swapping :"<<endl;
	
	arrayswap(array ,array1 , x , y);
	
	for(int i = 0 ; i < 5 ; i++)
	{
		
	}
	for(int i=0 ; i<5 ; i++)
	{
		for(int j=0 ; j<5 ; j++)
		{	
			if(array[i][j] < 10)
			cout<<"0";
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	
	
	
	
	
	return 0;
}
