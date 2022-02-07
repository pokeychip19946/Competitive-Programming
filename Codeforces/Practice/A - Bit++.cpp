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
    string s; 
    cin>>s;
    int x=0;
    if(s[0] == '+')
      x++;
    if(s[0] == '-')
      x--;
    if(s[2] == '+')
      x++;
    if(s[2] == '-')
      x--;
    cout<<x<<endl;
  }

  return 0;
}
