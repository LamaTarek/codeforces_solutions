#include <iostream>
#include <queue>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;
typedef long long ll;
void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}
bool isLucky(int cnt){
    string s= to_string(cnt);
    for (int i = 0; i < s.length(); ++i) {
        if(s[i]!='7'&&s[i]!='4')return false;
    }
    return true;
}
int main() {
    init();
    string s;
    cin>>s;
    int cnt=0;
    for (int i = 0; i < s.length(); ++i) {
        if(s[i]=='4'||s[i]=='7')cnt++;
    }
    if(isLucky(cnt))cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
