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
        int a[n];
        double sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sort(a, a+n);
        sum-=a[n-1];
        sum=sum/(n-1);
        cout<<fixed<<setprecision(6)<<sum+a[n-1]<<endl;
    }
    return 0;
}
