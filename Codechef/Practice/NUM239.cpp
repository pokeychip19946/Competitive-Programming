#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int l,h, cnt=0;
	    cin>>l>>h;
	    for(int i=l; i<=h; i++)
	    {
	        if(i%10==2 || i%10==3 || i%10==9) cnt++;
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
