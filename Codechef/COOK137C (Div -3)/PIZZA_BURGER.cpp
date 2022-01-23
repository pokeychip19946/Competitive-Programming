#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  	int a, b, c;
  	cin>>a>>b>>c;

  	if(b<=a) cout<<"PIZZA"<<endl;
  	else if(c<=a) cout<<"BURGER"<<endl;
  	else cout<<"NOTHING"<<endl;
  }

  return 0;
}
