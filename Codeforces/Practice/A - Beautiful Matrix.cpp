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
  int a[5][5], row, col, sum=0;
  for(int i=0; i<5; i++)
  {
    for(int j=0; j<5; j++)
    {
      cin>>a[i][j];
      if(a[i][j]==1)
      {
        row=abs(2-i);
        col=abs(2-j);
        sum=row+col;
        cout<<sum<<endl;
      }
    }
  }

  return 0;
}
