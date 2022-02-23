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
    int a, b;
    cin>>a>>b;
    int c=21-(a+b);
    if(c>=1&& c<=10) cout<<c<<endl;
    else cout<<-1<<endl;
  }

  return 0;
}
