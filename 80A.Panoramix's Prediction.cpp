#include <iostream>
#include <queue>
#include <algorithm>
#include <set>
#include <cmath>
#include <stack>
#include <cstring>

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
const int NN=57;
bool prime[NN];
void seive(){
    memset(prime,1,sizeof prime);
    prime[0]=prime[1]=0;
    for (int i = 2; i < NN/i; ++i) {
        if(prime[i]){
            for (int j = i*i; j < NN; j+=i) {
                prime[j]=0;
            }
        }
    }
}
int main() {
    init();
    seive();
    int n,m;
    cin>>n>>m;
    int i;
    for ( i = n+1; i < NN; ++i) {
        if(prime[i]==1){ break;}
    }
    if(m==i)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
