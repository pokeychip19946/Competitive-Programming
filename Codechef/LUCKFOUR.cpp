#include <bits/stdc++.h> 

using namespace std;

int main() {
	// Read the number of test cases.
	int t;
	cin>>t;
	while (t--) {
		// Read the input a, b
		int n, r, count=0;
		cin>>n;
		int q=n;
		while(q!=0)
		{
		    r=q%10;
		    if(r==4) count++;
		    q /=10;
		}
		cout<<count<<endl;

	}

	return 0;
}
