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
    getline(cin,s);
    set<char>st;
    for (int i = 0; i < s.length(); ++i) {
        if(s[i]>='a' && s[i]<='z')st.insert(s[i]);
    }
    cout<<st.size()<<"\n";
    return 0;
}
