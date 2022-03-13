#include <iostream>
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
   set<char>distinct;
    for (int i = 0; i < s.length(); ++i) {
        distinct.insert(s[i]);
    }
    if(distinct.size()%2==0)cout<<"CHAT WITH HER!\n";
    else cout<<"IGNORE HIM!\n";
    return 0;
}
