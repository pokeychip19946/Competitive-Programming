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
    int a;
    cin>>a;
    if(a%10==0) cout<<a/10<<endl;
    else 
    {
      int b=a/10;
      b++;
      cout<<b<<endl;
    }
  }

  return 0;
}
