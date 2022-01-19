#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#define freopen freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#else
#define freopen 
#endif
int count_1bit(int n)
{
	int i=0, count=0;
	int a[32];

	while(n>0)
	{
		a[i]=n%2;
		n/=2;
		if(a[i]==1)
		{
			count++;
		}
		i++;
	}

	return count;
}

int main()
{
	freopen;
	int t;
	cin>>t;
	while(t--)
	{
		int a[1000], i=0, n=0;
		while(i<1000)
		{
			int cnt=count_1bit(n); //can use __builtin_popcount() in built function instead of count_1bit()
			if(cnt%2==0)
			{
				a[i]=n;
				i++;
			}
			n++;
		}

		int test;
		cin>>test;
		for(int i=0; i<test; i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}

}
