// A subsequence is a contiguous/ non-contigous sequence which follows the order
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

void sub(int i, int arr[], vector<int> seq, int n){
   if(i>=n){
      // printing the subsequence when base case is met
      for (int i = 0; i < seq.size(); i++)
      {
         cout<<seq[i]<<" ";
      }
      cout<<"\n";
      return;
   }

   // two options: 1. to take an element 2.to not take an element

   // taking i'th element
   seq.push_back(arr[i]);
   sub(i+1, arr, seq, n);

   // not taking i'th element
   seq.pop_back();
   sub(i+1, arr, seq, n);
}

int main()
{
   int n; cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      cin>>arr[i];
   }

   vector<int> seq;
   sub(0,arr, seq, n);
   
   return 0;
}

// TC O(n*2^n)
// SC O(n)