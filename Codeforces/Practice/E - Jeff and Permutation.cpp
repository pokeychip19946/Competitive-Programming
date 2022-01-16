#include<bits/stdc++.h>
using namespace std;
int n,a[100010];
long long ans=0;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]=abs(a[i]);
	}
	for(int i=1;i<=n;i++){
		int l=0,r=0;
		for(int j=1;j<i;j++)if(a[i]>a[j])l++;
		for(int j=i+1;j<=n;j++)if(a[i]>a[j])r++;
		ans+=min(l,r);
	}
	cout<<ans<<endl;
	return 0;
}
