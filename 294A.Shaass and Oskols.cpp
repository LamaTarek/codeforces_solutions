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
    int n;
    cin>>n;
    int wire[n+2];
    for (int i = 1; i <= n; ++i)cin>>wire[i];
    int t,x,y;
    cin>>t;
    while (t--){
        cin>>x>>y;
        wire[x-1]+=(y-1);
        wire[x+1]+=(wire[x]-y);
        wire[x]=0;
    }
    for (int i = 1; i <= n; ++i) cout<<wire[i]<<"\n";
    return 0;
}
