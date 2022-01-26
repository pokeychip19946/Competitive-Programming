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
    int x, y, z, a, b;
    cin>>x>>y>>z;
    a=x*y;
    b=x*z;
    
    if(a>b){ 
      int c= a-b;
      cout<<c<<endl;
    } 
    else{
      int c=abs(a-b);
      cout<<c<<endl;
    }
  }

  return 0;
}
