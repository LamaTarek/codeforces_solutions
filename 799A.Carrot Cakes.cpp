#include <iostream>
#include <bits/stdc++.h>
#include <queue>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;
typedef long long ll;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main() {
    init();
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    if(k>=n){cout<<"NO\n"; return 0;}
    int oneOven= ceil((float)n/k)*t;
    if(oneOven-d>t)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
