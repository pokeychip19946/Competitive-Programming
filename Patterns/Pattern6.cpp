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
    // int n;
    // cin>>n;
    for(int i=1; i<5; i++)
    {
      for(int j=1; j<=9; j++)
      {
        if(j>=6-i && j<=4+i) cout<<" ";
        else cout<<"*";
      }
      cout<<"\n";
    }
  }

  return 0;
}

/*Sample output-
**** ****
***   ***
**     **
*       *
*/
