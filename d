#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#define freopen freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#else
#define freopen 
#endif

void shift(int arr[], int n)
{
    int count = {0}; 
    for (int i = 0; i < n; i++)
        if (arr[i] != 0)
            arr[count++] = arr[i]; 
    while (count < n)
        arr[count++] = 0;
}
int main()
{
    freopen;
    int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    shift(arr, n);
    for (int i = 0; i < n; i++)
    	cout<<arr[i];
    return 0;
}
