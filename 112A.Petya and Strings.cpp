#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
typedef long long ll;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main() {
    init();
    string s1,s2;
    cin>>s1>>s2;
    for (int i = 0; i < s1.length(); ++i) {
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }
    if(s1.compare(s2)<0)cout<<-1<<"\n";
    else if(s1.compare(s2)>0)cout<<1<<"\n";
    else cout<<0<<"\n";
    return 0;
}
