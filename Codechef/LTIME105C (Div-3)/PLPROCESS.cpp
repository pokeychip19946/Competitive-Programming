#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {

    long long int ans;
    long long int n;
    cin>>n;
    long long int a, sum=0, b[n];
    for(int i=0; i<n; i++)
    {
      cin>>a;
      sum+=a;
      b[i]=sum;
      
    }
    ans=sum;
    for(int i=0; i<n; i++)
    {
        ans=min(max(b[i], sum-b[i]), ans);
    }
    cout<<ans<<endl;
  }

  return 0;
}
