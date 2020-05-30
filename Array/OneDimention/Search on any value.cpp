#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int arr[5];
	int *poi;
	poi=arr;
	cout<<"ENTER 5"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter m"<<endl;
	int m;
	
	cin>>m;
	
	for(int i=1;i<=5;i++)
	{
		if(m==i)
		{
			cout<<*(poi+m-1)<<endl;
		}
	}

	
	
	
	
	
	return 0;
}
