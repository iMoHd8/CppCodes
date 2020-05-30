#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
	int i,j;
	
	for(i=1;i<=6;i++){
		for(j=1;j<=6;j++){
			if(i==1)
			cout<<j;
			else if(j==1)
			cout<<i;
			else if(i==6)
			cout<<i-j+1;
			else if(j==6)
			cout<<j-i+1;
			else
			cout<<" ";
		}
		cout<<endl;
	}
	
	
	
	
	
	return 0;
}
