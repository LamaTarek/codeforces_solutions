#include <iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<map>
#include <queue>
#include <cstring>
#include <set>
#define clr(x,val) memset(x,val,sizeof(x))
typedef long long ll;
using namespace std;
void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}
map<string ,string>mp;
int main() {
    init();
    int n,m;
    cin>>n>>m;
    string s1,s2;
    while (m--){
        cin>>s1>>s2;
        mp[s1]=s2;
    }
    while (n--){
        cin>>s1;
        if(mp[s1].length()<s1.length())cout<<mp[s1]<<" ";
        else cout<<s1<<" ";
    }
    cout<<"\n";
    return 0;
}