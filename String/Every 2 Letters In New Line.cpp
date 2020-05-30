#include<iostream>
using namespace std;

int main ()
{
    string s1;
	 
    cout << "Enter a string : ";
    cin>>s1;
    
    for(int i=0 ; i<s1.size();i++)
    {
		if(i % 2 == 0 && i!=0)
    		cout<<endl;
    		cout<<s1[i];
	}
    return 0;
}
