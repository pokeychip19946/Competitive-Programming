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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
      if(s[i]!=s[i-1])
      {
        cnt++;
      }
    }
    cout<<cnt++<<endl;
  }

  return 0;
}
