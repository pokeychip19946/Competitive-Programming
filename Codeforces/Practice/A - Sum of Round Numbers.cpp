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
    int n;
    cin>>n;
    int q, count=0, index=0; 
    q=n;
    int a[5];
    while(q>0)
    {
      int x=q%10;
      q=q/10;
      a[index]=x;
      
      index++;
      if(x!=0)
      {
        count++;
      }
    }

    cout<<count<<endl;
    for(int i=0; i<index; i++)
    {
        if(i==0 && a[i]!=0)
            cout<<a[i]<<" ";
        else if(i==1 && a[i]!=0)
            cout<<a[i]*10<<" ";
        else if(i==2 && a[i]!=0)
            cout<<a[i]*100<<" ";
        else if(i==3 && a[i]!=0)
            cout<<a[i]*1000<<" ";
        else if(i==4 &&a[i]!=0)
            cout<<a[i]*10000<<" ";
    }
  }

  return 0;
}
