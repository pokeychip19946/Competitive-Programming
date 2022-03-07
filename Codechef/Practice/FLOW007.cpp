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
        int q=n, r, res=0;
        while(q!=0)
        {
            r=q%10;
            res=(res*10)+r;
            q/=10;
        }
        cout<<res<<endl;
	}
	return 0;
}
