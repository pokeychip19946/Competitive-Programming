#include <bits/stdc++.h>
using namespace std;

#define long long int int;
int main()
{
// 	freopen;
	int t;
	cin>>t;
	while(t--)
	{
		int k, count=0; 
        cin>>k;
        while(k%2==0)
        {
            k/=2;
            count++;
        }
        cout<<count<<endl;
	}
}
