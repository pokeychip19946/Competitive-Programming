#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int Z,Y,A,B,C,k,p;
      cin>>Z>>Y>>A>>B>>C;
      k=Z-Y;
      p=k-A-B-C;
      if(p>=0)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
    }
}
