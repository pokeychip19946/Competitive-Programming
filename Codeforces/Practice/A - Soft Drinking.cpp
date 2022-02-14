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
  int n, k, l, c, d, p, nl, np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  int toast= (k*l)/nl;
  int lime_toast = c*d;
  int salt_toast = p/np;
  int mini = min(toast, lime_toast);
  int mini2 = min(mini, salt_toast);
  int ans = mini2/n;
  cout<<ans<<endl;

  return 0;
}
