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
    long int n;
    cin >> n;
    if(n%21==0)
    {

      cout <<"The streak is broken!"<< endl;
    }

    else
    {
      string str = to_string(n);
      // cout<<string::npos<<" divyam"<<endl;
      if(str.find("21")!= string::npos)
      {
        cout <<"The streak is broken!"<< endl;
      }
      else
      {
        cout <<"The streak lives still in our heart!"<< endl;
      }
    }   
  }
  return 0;
}
