
    #include <bits/stdc++.h>
    using namespace std;

    
    int main()
    {
      int t;
      cin>>t;
      while(t--)
      {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x=0, y=0; 
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0') x++;
            else y++;
        }
        if(x==y)
        {
            cout<<x*2<<endl;
        }
        else if(x<y)
        {
            cout<<((x*2)+1)<<endl;
        }
        else 
        {
            cout<<((2*y)+1)<<endl;
        }
      }
    
      return 0;
    }
