#include <bits/stdc++.h>
using namespace std;


int main()
{

  int t;
  cin>>t;
  while(t--)
  {
    int n, a;
    cin>>n;
    if(n%2==0)
    {
      cout<<n/2<<endl;        
    } 
    else 
    {
      a=(n/2)+1;
      a=a*(-1);
      cout<<a<<endl;
    } 
  }

  return 0;
}
