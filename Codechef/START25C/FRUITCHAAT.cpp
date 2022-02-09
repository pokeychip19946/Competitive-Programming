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
    int x, y;
    cin>>x>>y;
    if(x/2<y)
    {
      x=x/2;
      cout<<x<<endl;
    }
    else 
    {
      cout<<y<<endl;
    }

  }

  return 0;
}
