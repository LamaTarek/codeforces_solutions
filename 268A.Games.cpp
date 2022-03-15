#include <iostream>
#include <bits/stdc++.h>
#include <queue>
#include <algorithm>
#include <set>
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
    int host[n];
    int guest[n];
    for (int i = 0; i < n; ++i) {
        cin>>host[i]>>guest[i];
    }
    int cnt=0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
           if(host[i]==guest[j])cnt++;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}
