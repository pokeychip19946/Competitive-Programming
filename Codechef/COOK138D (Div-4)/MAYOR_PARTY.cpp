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
    int a, b, c;
    cin>>a>>b>>c;
    if((a+c)>b) cout<<a+c<<endl;
    else cout<<b<<endl;
  }
  return 0;
}
