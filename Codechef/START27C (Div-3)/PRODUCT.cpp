#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#define freopen freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#else
#define freopen 
#endif
int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    if (a == b)
        return a;
  
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main()
{
  freopen;
  int t;
  cin>>t;
  while(t--)
  {
    int b, c;
    cin>>b>>c;
    int n=gcd(b,c);
    cout<<c/n<<endl;

  }

  return 0;
}
