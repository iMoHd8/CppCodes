#include <iostream>
using namespace std;

int main()
{
	int arr[2][2] = {{2,2},{4,4}};
	int arr1[3][3] = {{1,2,3},{0,1,4},{1,1,1}};
	int sum=0 , summ=0 , summ1=0;
	
	cout<<"Sum Of Elements Of The Arrays!: "<<endl;
	for(int i=0 ; i<2 ; i++)
	{
		for(int j=0 ; j<2 ; j++)
		{
			summ += arr[i][j];
			for(int k=0 ; k<3 ; k++)
			{
				for(int m=0 ; m<3 ; m++)
				{
					cout<< arr[i][j] <<" + " << arr1[k][m];
					sum = arr[i][j] + arr1[k][m];
					cout<<" = "<<sum<<endl;
					
				}
				
			}
		
		}
		
	}
	

	for(int i=0 ; i<3 ; i++)
	{
		for(int j=0 ; j<3 ; j++)
		{
			summ1 += arr1[i][j];
		}
	}
	
	cout<<"The Sum Of Array Number {1} = #"<<summ<<endl;
	cout<<"The Sum Of Array Number {2} = #"<<summ1<<endl;
	cout<<"The Sum Of Array Number {1} And Array Number {2} = #"<<summ+summ1<<endl;
	
	
	
	
	
}
