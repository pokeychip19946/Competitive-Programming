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
  string s;
  cin>>s;
  int x, dif=0;
  x=s[0] -'0';
  if(x!=9)
  {
    if(x>=5)
    {
      dif=9-x;
      s[0]=(dif+'0');
    }
  }

  for(int i=1; i<s.size(); i++)
  {
    int n=s[i] -'0';
    if(n>=5)
    {
      int diff=9-n;
      s[i]=(diff+'0');
    }
  }

  cout<<s<<endl;
  return 0;
}
