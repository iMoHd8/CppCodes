#include<iostream>
using namespace std;

void bignum(int x[][5])
{
	int m=x[0][0];
	
	for(int i=0 ; i<5 ; i++)
	{
		for(int j=0 ; j<5 ; j++)
		{
			if(x[i][j] > m)
				m=x[i][j];
		}
	}
	cout<<"The Biggest Number = "<<m<<endl;

}

void bignum1(int y[][5])
{
	int n = y[0][0];
	for(int i=0 ; i<5 ; i++)
	{
		for(int j=0 ; j<5 ; j++)
		{
			if(n > y[i][j] )
				n=y[i][j];
		}
	}
	cout<<"The Smallest Number = "<<n<<endl;;
}

int main()
{
	int array[5][5] = {1,2,3,4,5,6,7,8,9,100,20,30,40,55,60,77};
	
	bignum(array);
	bignum1(array);
	
	
	
	
	
	return 0;
}
