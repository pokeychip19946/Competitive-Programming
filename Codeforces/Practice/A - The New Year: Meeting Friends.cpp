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
  int a[3];
  for(int i=0; i<3; i++)
  {
    cin>>a[i];
  }

  sort(a, a+3);
  int dif1=a[1]-a[0];
  int dif2=a[2]-a[1];
  int sum=dif1+dif2;
  cout<<sum<<endl;

  return 0;
}
