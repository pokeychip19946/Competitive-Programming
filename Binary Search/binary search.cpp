#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#define freopen freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#else
#define freopen 
#endif
int search(int arr[], int l, int r, int x)
{
  if (r >= l) 
  {
    int mid = l + (r - l) / 2;
    if (arr[mid] == x) return mid;
    if (arr[mid] > x) return binarySearch(arr, l, mid - 1, x);
    return binarySearch(arr, mid + 1, r, x);
  }
  return -1;
}

int main()
{
  freopen;
  int t;
  cin>>t;
  while(t--)
  {
    int n=6;
    int a[n]={2, 46, 3, 5, 37, 1};
    int x = 46;
    int result = search(a, 0, n - 1, x);

  }

  return 0;
