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
    ll arr[n+1];
    for (int i = 1; i <= n; ++i) cin>>arr[i];
    for (int i = 1; i <= n; ++i) {
        if(i==1)cout<<(arr[i+1]-arr[i])<<" "<<(arr[n]-arr[i]);
        else if(i==n)cout<<(arr[n]-arr[n-1])<<" "<<(arr[n]-arr[1]);
        else{
            cout<<min(arr[i+1]-arr[i],arr[i]-arr[i-1])<<" "<<max(arr[i]-arr[1],arr[n]-arr[i]);
        }
        cout<<"\n";
    }
    return 0;
}
