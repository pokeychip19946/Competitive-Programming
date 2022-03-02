#include <bits/stdc++.h>
using namespace std;
int main()
{

  int t;
  cin>>t;
  while(t--)
  {
    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    float a, b;
    a= float(x2)/float(x1);
    b= float(y2)/float(y1);
    if(a<b) cout<<"-1"<<endl;
    else if(a>b) cout<<"1"<<endl;
    else if(a==b) cout<<"0"<<endl;
  }

  return 0;

}
