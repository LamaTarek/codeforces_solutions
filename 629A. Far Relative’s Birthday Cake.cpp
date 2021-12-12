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
int nCr(int n,int r){
    ll ans=1,rFact=2;
    for (ll i = n-r+1; i <= n; ++i) {
        ans*=i;
        if(ans%rFact==0 && rFact<=r) ans/=rFact++;
    }
    return ans;
}
int main() {
    init();
    int n;
    cin>>n;
    char arr[n][n];
    int c,ans=0;
    for (int i = 0; i < n; ++i) {
        c=0;
        for (int j = 0; j < n; ++j) {
            cin>>arr[i][j];
            if(arr[i][j]=='C')c++;
        }
        ans+= nCr(c,2);
    }
    for (int i = 0; i < n; ++i) {
        c=0;
        for (int j = 0; j < n; ++j) {
            if(arr[j][i]=='C')c++;
        }
        ans+= nCr(c,2);
    }
    cout<<ans<<"\n";
    return 0;
}
