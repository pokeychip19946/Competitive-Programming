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
    long long int sum=0, n, count=0;
    int mx=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
      cin>>arr[i];      
      if(arr[i]>=0) 
      {  
        count++;
        sum=sum+arr[i];
      }
      mx=max(mx, arr[i]);
    }
    if(sum>0) cout<<sum<<" "<<count<<endl;
    else cout<<mx<<" "<<"1"<<endl;
  }

  return 0;
}
