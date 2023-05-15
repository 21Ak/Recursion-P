// Count the subsequences with sum = k
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

int printS(int ind, int s, int sum, int arr[], int n){
    if(ind == n){
        if(s == sum){
            return 1;
        }
        else return 0;
    }

    // picking i'th element
    s+=arr[ind];
    int l = printS(ind+1, s, sum, arr, n);

    // not picking i'th element
    s-=arr[ind];
    int r = printS(ind+1, s, sum, arr, n);
    
    return l+r;
}

int main()
{
   int n, sum; cin>>n>>sum;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      cin>>arr[i];
   }

   vector<int> ds;
   cout<<printS(0, 0, sum, arr, n);
   return 0;
}