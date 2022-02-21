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
    int n;
    cin>>n;
    if(n>65) cout<<"Overload"<<endl;
    else if(n<35) cout<<"Underload"<<endl;
    else cout<<"Normal"<<endl;
  }

  return 0;
}
