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
    for(int i=1; i<=n; i++)
    {
      for(int j=1; j<=n; j++)
      {
        if(j<=i)
        {
          for(int k=1; k<=n; k++)
          {
            if(k<j) cout<<"*";
          }

          cout<<j;
        }
      }
      cout<<"\n";
    }
  }
}


/*sample output - 
1
1*2
1*2**3
1*2**3***4
*/
