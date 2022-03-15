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
    string s,t;
    cin>>s>>t;
    int cnt=1;
    int j=0;
    for (int i = 0; i < t.length(); ++i) {
        if(t[i]==s[j]){
            cnt++;
            j++;
        }
    }
    cout<<cnt<<"\n";

    return 0;
}
