#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, a=0;
  cin>>t;
  int c=0;
  while(t--)
  {
    pair<int, string> a;
    a={1,"divyam"};
    cout<<a.first<<" "<<a.second<<endl;
    // ref to input value in a variable
    pair<int, string> &p = a; 
    pair<int, string> p1=a;
    p1.first=4; 
    p.first = 3;
    cout<<"p.first="<<p.first<<" "<<"p1.first="<<p1.first<<" "<< "p.second = "<<p.second<<" "<<"p1.second="<<p1.second<<endl;
    // let a[1,2,3] and b[2,3,4] swap two numbers and changes should take place in both arrays
    cout<<"\n";
    cout<<"\n";
    pair<int, int>arr[3];
    arr[0]={1,2};
    arr[1]={2,3};
    arr[2]={3,4};
    cout<<"before swap"<<endl;
    swap(arr[0], arr[2]);
    for(int i=0; i<3; i++)
    {
      cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    swap(arr[0], arr[2]);
    cout<<"after swap"<<endl;
    for(int i=0; i<3; i++)
    {
      cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }


  }

  return 0;
}
