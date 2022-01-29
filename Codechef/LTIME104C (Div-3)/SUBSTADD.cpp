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
    int n, x, y;
    int flag=0;
    cin>>n>>x>>y;
    int a[n], b[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
      
    for(int i=0; i<n; i++)
    {
        int c=b[i]-a[i];
        if(c!=x&&c!=y)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
  }
  return 0;
}
