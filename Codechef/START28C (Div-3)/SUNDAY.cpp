#include <bits/stdc++.h>
using namespace std;
int main()
{

  int t;
  cin>>t;
  while(t--)
  {
    int n, x;
    cin>>n;
    vector<bool> a(31);
    for(int i=0; i<n; i++)
    {
      cin>>x;
      a[x]=true;
    }
    for(int i=1; i<=4; i++)
    {
      a[i*7] =true;
      a[7*i-1]=true;
    }
    int ans=0;
    for(int i=1; i<31; i++)
    {
      if(a[i]) ans++;
    }
    cout<<ans<<endl;
  }

  return 0;

}
