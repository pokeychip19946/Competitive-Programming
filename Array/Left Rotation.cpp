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
  int n, x;
  cin>>n>>x;
  int a[n];
  for(int i=0; i<n; i++)
  {
    cin>>a[i];    
  }

  while(x>0)
  {
    int temp = a[0];
    for(int i=0; i<n; i++)
    {
      a[i]=a[i+1];
    }
    a[n-1] = temp;
    x--;
  }
  for(int i=0 ; i<n; i++)
  {
    cout<<a[i]<<" ";
  }

  return 0;
}
