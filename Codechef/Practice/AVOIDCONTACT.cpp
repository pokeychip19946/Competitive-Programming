#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x==y)
	        cout<<(x-y+y*2-1)<<endl;
	    else
	        cout<<(x-y+y*2)<<endl;
	}
	return 0;
}

