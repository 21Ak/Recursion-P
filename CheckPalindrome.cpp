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

bool isPal(int i, string s, int n){
    if(i>=n/2) return true;

    if(s[i]!=s[n-i-1]){
        return false;
    }
    
    return true;

}

int main()
{
    string s; cin>>s;
    bool ans = isPal(0, s, s.length());
    cout<<ans<<endl;
    return 0;
}