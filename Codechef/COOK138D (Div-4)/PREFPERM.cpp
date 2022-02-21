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
    int n, k, pre=0;
    cin>>n>>k;
    vector<int> v;
    int a[k];
    for(int i=0; i<k; i++)
    {
      cin>>a[i];
    }
    sort(a, a+k);
    for(int i=0; i<k; i++)
    {
      for(int j=a[i]; j>pre; j--)
      {
        v.push_back(j);
      }
      pre=a[i];
    }
    for(auto it = v.begin(); it!=v.end(); it++)
    {
      cout<<*it<<" ";
    }
    cout<<endl;
  }
  return 0;
}
