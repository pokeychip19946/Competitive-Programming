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
  	string s;
  	cin>>s;
  	int flag=0;
  	int low=0;
  	int high=s.size()-1;
  	cout<<high<<endl;
  	cout<<s<<endl;
  	while(high>low)
  	{
  		cout<<"low->"<<low<<"low char->"<<s[low]<<endl;
  		cout<<"high->"<<high<<"high char->"<<s[high]<<endl;
  	
  		if(s[low]!=s[high]) 
  		{	
  			cout<<"not palindrome"<<endl;
  			flag=1;
  			break;
  		}		
  		else 
  		{	
  			low++;
  			high--;
  		}
  	}
  	if(flag==0) cout<<"palindrome"<<endl;
  }

  return 0;
}

