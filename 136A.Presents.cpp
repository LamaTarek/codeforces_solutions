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
    int arr[n+1];
    int p[n+1];
    for (int i = 1; i <= n; ++i) cin>>arr[i];
    for (int i = 1; i <= n; ++i) p[arr[i]]=i;
    for (int i = 1; i <= n; ++i) cout<<p[i]<<" ";
    cout<<"\n";
    return 0;
}
