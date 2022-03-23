#include <bits/stdc++.h>
using namespace std;


int main()
{

  int t;
  cin>>t;
  while(t--)
  {
    
    
    int n;
    cin>>n;
    int x=0;
    for(int i=1; i<=n; i++)
    {
      if(x>=0)
      {
        x=x-i;
      }
      else
      {
        x=x+i;
      }
    }
    cout<<x<<endl;
  }

  return 0;
}
