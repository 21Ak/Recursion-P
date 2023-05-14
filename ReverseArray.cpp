#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<iomanip>
#include<ctime>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<bitset>
#include<cassert>
#define ll long long int
using namespace std;
void rev(int i, int arr[], int n){
    if(i>=n/2) return;

    swap(arr[i], arr[n-i-1]);
    rev(i+1, arr, n);
}
int main()
{
   int n; cin>>n;
   int arr[n];
   for (int  i = 0; i < n; i++)
   {
    cin>>arr[i];
   }

   rev(0,arr,n);

   for (int i = 0; i < n; i++)
   {
    cout<<arr[i]<<" ";
   }
   
   
   return 0;
}