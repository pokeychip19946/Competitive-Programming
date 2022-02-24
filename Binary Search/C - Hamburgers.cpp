#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll nb, ns, nc, pb, ps, pc;
ll B=0, S=0, C=0;
ll paise;
bool good(ll x)
{
    ll money=max(ll(0), B*x-nb)*pb+max(ll(0), S*x-ns)*ps+max(ll(0), C*x-nc)*pc;
    if(money<=paise) return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s; cin>>s;
    cin>>nb>>ns>>nc>>pb>>ps>>pc;
    cin>>paise;
    for (ll i = 0; i < s.size(); i++)
    {
        if(s[i]=='B') B++;
        else if(s[i]=='S') S++;
        else if(s[i]=='C') C++;
    }
    ll l=0; ll r=1e15+1;
    while (l<r-1)
    {
        ll x=(l+r)/2;
        if(good(x))
            l=x;
        else
            r=x;
    }
    cout<<l<<"\n";
    return 0;
}
