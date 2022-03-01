#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool check(int i, int b, int s, int c, int nb, int ns, int nc, int pb, int ps, int pc, int r)
{
  nb=b*i-nb;
  ns=s*i-ns;
  nc=c*i-nc;

  if(nb<0) nb=0;
  if(ns<0) ns=0;
  if(nc<0) nc=0;

  pb*=nb;
  ps*=ns;
  pc*=nc;

  int total=pb+ps+pc;
  if(total<=r) return true;
  
  return false;
}
main()
{
  
  string a;
  cin>>a;
  int b, s, c;
  for(int i=0; i<a.size(); i++)
  {
    if(a[i]=='B') 
    {
      b++;
      continue;
    }
    if(a[i]=='S') 
    {
      s++;
      continue;
    }
    if(a[i]== 'C') 
    {
      c++;
      continue;
    }
  }

  int nb, ns, nc;
  cin>>nb>>ns>>nc;

  int pb, ps, pc;
  cin>>pb>>ps>>pc;

  int r;
  cin>>r;
  int ans=0;
  /*
  linear search approach;
  for(int i=0; i<1e14; i++)
  {
    if(check(i, b, s, c, nb, ns, nc, pb, ps, pc, r)==true)
    {
      ans=i;
    }
  }
  cout<<ans<<endl;
  */
  
  // binary search approach
  int low=0; 
  int high=1e14;
  while(low<=high)
  {
    int mid=(low+high)/2;
    if(check(mid, b, s, c, nb, ns, nc, pb, ps, pc, r)==true)
    {
      ans=mid;
      low=mid+1;
    }
    else
    {
      high=mid-1;
    }
  }

  cout<<ans<<endl;
  return 0;
}
