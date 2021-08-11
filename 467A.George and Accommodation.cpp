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
    int n,cnt=0,p,q;
    cin>>n;
    while (n--){
        cin>>p>>q;
        if((q-p)>=2)cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}
