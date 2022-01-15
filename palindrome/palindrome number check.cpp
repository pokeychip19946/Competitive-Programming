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
  	int n, reversed = 0, remainder, original;
  	cin>>n;
  	original = n;
  	while (original != 0)
  	{
  		remainder = original % 10;
  		reversed = reversed * 10 + remainder;
  		original /= 10;
  	}
  	if (original == reversed)
  	    printf("%d is a palindrome.\n", n);
  	else
  	    printf("%d is not a palindrome.\n",n);
  }

  return 0;
}
