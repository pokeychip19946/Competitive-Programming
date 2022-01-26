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
    cout<<n-1<<" "<<n<<" "<<n+1;
    cout<<"\n";
  }

  return 0;
}
