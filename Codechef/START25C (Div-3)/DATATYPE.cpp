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
    long long int n, x;
    cin>>n>>x;
    if(x<=n && x>0)
    {
      cout<<x<<endl;
    }
    else
    {
        while(x>n)
        {
            x=x-n-1;
        }
        cout<<x<<endl;
    }

  }

  return 0;
}
