#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#define freopen freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#else
#define freopen 
#endif

int main()
{
	freopen;
	int a[6];
	int n=11234;
	int q=n;
	int r;
	int size=6;
	int index=0;
	while(true)
	{
		
		if(q==0)
		{
			break;
		}
		else
		{
			r=q%10;
			a[index]=r;
		}

		for(int i=size-2; i>=index; i--)
		{
			a[i+1]=a[i];
		}
		q/=10;
	}
	for(int i=0; i<size; i++)
	{
		cout<<a[i]<<" ";
	}

}
