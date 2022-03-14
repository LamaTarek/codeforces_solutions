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
    string s;
    cin>>s;
    char cursor='a';
    int steps=0;
    for (int i = 0; i < s.length(); ++i) {
        int clockWise=abs((s[i]-'a')-(cursor-'a'));
        int antiClockWise=26-clockWise;
        steps+=min(clockWise,antiClockWise);
        cursor=s[i];
    }
    cout<<steps<<"\n";
    return 0;
}
