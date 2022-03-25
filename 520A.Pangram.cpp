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
    string s;
    int n;
    cin>>n>>s;
    vector<char>v;
    for (int i = 0; i < s.length(); ++i) {
        s[i]= tolower(s[i]);
        v.push_back(s[i]);
    }
    vector<char>::iterator ip;
    sort(v.begin(),v.end());
    ip=unique(v.begin(),v.begin()+n);
    v.resize(distance(v.begin(), ip));
    if(v.size()==26)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
