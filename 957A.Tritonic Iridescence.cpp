#include <iostream>
#include<string>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<vector>
#include<numeric>
#include<cstring>
#include <set>
#include <stack>
#include <deque>
#include <queue>
typedef long long ll;
using namespace std;
void init()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}
#define posmod(v,m) ((v)%(m)+(m))%(m)
#define cl(x,val) memset(x,val,sizeof(x))
deque<int>q;
int main() {
    init();
    //freopen("file.in","r",stdin);
    int n;
    string s;
    cin>>n>>s;
    bool flag=false;
    for (int i = 0; i < n; ++i) {
        if(s[i]==s[i+1] && s[i]!='?'){
            cout<<"No\n";
            return 0;
        }
    }
    for(int i=0;i<n && !flag;i++){
        if(s[i]=='?' && (i==0 || i==n-1))flag= true;
        else if(s[i]=='?' && s[i-1]==s[i+1])flag= true;
        else if(s[i]==s[i+1] && s[i]=='?')flag= true;
    }
    if(flag)cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
