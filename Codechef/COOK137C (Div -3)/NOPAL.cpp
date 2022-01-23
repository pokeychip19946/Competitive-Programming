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
  int t;
  cin>>t;
  while(t--)
  {
  	string s="";
  	int n;
  	cin>>n;
  	for(int i=0; i<n; i++)
  	{
  		s=s+char(97 + (i%26));
  	}
  	cout<<s<<endl;;

  }
  return 0;
}
