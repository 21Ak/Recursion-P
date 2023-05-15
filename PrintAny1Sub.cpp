// Print any 1 subsequence whose sum equal to the given sum
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

bool printS(int ind, vector<int>& ds, int s, int sum, int arr[], int n){
    if(ind == n){
        if(s == sum){
            for(auto it: ds) cout<<it<<" ";
            cout<<endl;
            return true;
        }
        // condition not satisfied
        else return false;
    }

    // picking i'th element
    ds.push_back(arr[ind]);
    s+=arr[ind];
    if(printS(ind+1, ds, s, sum, arr, n)==true){
        return true;
    }

    // not picking i'th element
    s-=arr[ind];
    ds.pop_back();
    if(printS(ind+1, ds, s, sum, arr, n)){
        return true;
    }

    return false;
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
   printS(0, ds, 0, sum, arr, n);
   return 0;
}