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
    if(x*2<=y)
    {
      cout<<x<<" "<<2*x<<endl;
    }
    else 
    {
      cout<<-1<<" "<<-1<<endl;
    }
  }

  return 0;
}
