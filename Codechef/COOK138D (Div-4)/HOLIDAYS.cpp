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
    int n, w, cnt=0, sum=0; 
    cin>>n>>w;
    int a[n];
    for(int i=0; i<n; i++)
    {
      cin>>a[i];
    }
    sort(a, a+n);
    for(int i=n-1; i>=0; i--)
    {
      sum=sum+a[i];
      cnt++;
      if(sum>=w) 
      {  
        break;
      }
    }
    int ans=n-cnt;
    cout<<ans<<endl;

  }
  return 0;
}
