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
    int x, cnt=0;
    for(int i=0; i<n; i++)
    {
      cin>>x;
      if(x>=10 && x<=60) cnt++;
      else continue;
    }
    cout<<cnt<<endl;
  }

  return 0;
}
