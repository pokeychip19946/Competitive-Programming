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
  int n, a[n];
  cin>>n;
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
  }
  for(int i=0; i<n; i++)
  {
    cout<<"i="<<i<<endl;
    cout<<"a[i]="<<a[i]<<endl;

    l=r=0;
    for(int j=0; j<i; j++)
    {
      
      if(a[i]>a[j]) l++;
    }
    for(int j=i+1; j<n; j++)
    {
      if(a[i]>a[j]) r++;
    }
    if(l>r) 
    { 
      ans+=r;
    }
    else if(l<r) 
    { 
      ans+=l;
    }
    else 

  }
  cout<<ans;
  return 0;
}
