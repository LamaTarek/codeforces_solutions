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
    int cal[5];
    for (int i = 1; i < 5; ++i) cin>>cal[i];
    string s;
    cin>>s;
    ll total=0;
    for (int i = 0; i < s.length(); ++i) {
        total+=cal[s[i]-'0'];
    }
    cout<<total<<"\n";
    return 0;
}
