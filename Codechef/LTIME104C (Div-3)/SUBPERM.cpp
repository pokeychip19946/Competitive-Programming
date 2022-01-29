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
    int n, k;
    cin>>n>>k;
    if(n==1) cout<<"1"<<endl;
    else if(k==1) cout<<"-1"<<endl;
    else
    {
        int i;
        for(i=k; i<=n; i++)
        {
            cout<<i<<" ";
        }
        for(i=1; i<k; i++)
        {
            cout<<i<<" ";
        }
    }
    cout<<"\n";

  }

  return 0;
}
