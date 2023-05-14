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
int f(int n){
    if(n<=1) return n;

    return f(n-1)+f(n-2);
}

int main()
{
    int n; cin>>n;
    cout<<f(n)<<endl;
   return 0;
}