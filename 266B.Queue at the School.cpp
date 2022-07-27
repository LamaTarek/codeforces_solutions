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

int main() {
    init();
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--){
        for (int i = 0; i < s.size()-1; ++i) {
            if(s[i]=='B' && s[i+1]=='G'){swap(s[i],s[i+1]);i++;}
        }
    }
    cout<<s<<"\n";
    return 0;
}
