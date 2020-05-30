#include <iostream>
using namespace std;

int main()
{
	int arr1[3],arr2[3],sum[3],summ=0;
	
	cout<<"Array 1"<<endl;
	for(int i=0;i<3;i++)
	{
		cin>>arr1[i];
	}
	cout<<"Array 2"<<endl;
	for(int i=0;i<3;i++)
	{
		cin>>arr2[i];
	}
	
	for(int i=0;i<3;i++)
	{
		cout<<arr1[i]<<" + "<<arr2[i]<<" = ";
		sum[i] = arr1[i]+arr2[i];
		cout<<sum[i]<<endl;
		summ=summ+sum[i];
	}
	cout<<"Sum Of All Elements = "<<summ<<endl;
	
	
	
	
	
	
	return 0;
}
