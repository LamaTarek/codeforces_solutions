#include <iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include <set>
#include<vector>
#include <cmath>
#include <map>
#include <stack>
#include <cstring>
#include <stdio.h>
typedef long long ll;
using namespace std;
void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}
ll nPr(ll n,ll r){
    ll ans=1;
    for (ll i = n-r+1; i <= n; ++i) {
        ans*=i;
    }
    return ans;
}
ll nCr(ll n,ll r){
    ll ans=1,rFact=2;
    for (ll i = n-r+1; i <= n; ++i) {
        ans*=i;
        if(ans%rFact==0 && rFact<=r) ans/=rFact++;
    }
    return ans;
}
int main() {
    init();
    freopen("popcorn.in","r",stdin);
    int t,n,m;
    cin>>t;
    while (t--){
        cin>>n>>m;
        cout<<nCr(n,m)<<"\n";
    }
    return 0;
}
