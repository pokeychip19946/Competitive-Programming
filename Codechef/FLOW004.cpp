#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int last=n%10;
	    while(n>=10)
	    {
	        n=n/10;
	    }
	    int first=n;
	    int ans=first+last;
	    cout<<ans<<endl;
	}
	return 0;
}
