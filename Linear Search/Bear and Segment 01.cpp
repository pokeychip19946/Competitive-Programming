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
    int count=0, index, flag=0;
    string arr;
    cin>>arr;
    for(int i=0; i<arr.size(); i++)
    {
      if(arr[i]=='1')
      {
        if(flag==0)
        {
          index=i;
          flag=1;
        }
        count++;
      }
    }
    // cout<<count<<endl;
    int val=1;
    for(int i=index; i<index+count; i++)
    {
      if(arr[i]=='0')
      {
        val=0;
        break;
      }
    }
    if(val==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }

  return 0;
}
