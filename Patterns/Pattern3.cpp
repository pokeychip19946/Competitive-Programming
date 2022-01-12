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
    for(int i=0; i<n; i++)
    {
      for(int j=0; j<n; j++)
      {
        if(j<n-i) cout<<"*";
      }
      cout<<"\n";
    }
  }

  return 0;
}

/*Sample output-
****
***
**
*
*/
