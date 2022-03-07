#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    int a,r, res=0;
	    cin>>a;
	    while(a>0)
	    {
	     r=a%10;
	     res = res+r;  
	     a/=10;
	     
	    }
	    cout<<res<<endl;
	}
	return 0;
}
