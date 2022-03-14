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
    int n,count=0;
    string s;
    cin>>n>>s;
    stack<char>st;
    st.push(s[0]);
    for (int i = 1; i < s.length(); ++i) {
        if(st.top()==s[i])count++;
        else st.push(s[i]);
    }
    cout<<count<<"\n";
    return 0;
}
