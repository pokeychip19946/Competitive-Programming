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
    int a[3]; 
    for(int i=0; i<3; i++)
    {
      cin>>a[i];
    }
    sort(a, a+3);
    int j=0;
    if((a[j]+a[j+1])==a[j+2]) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
  }

  return 0;
}
