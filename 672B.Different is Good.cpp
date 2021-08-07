#include <iostream>
#include<string>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<vector>
#include<numeric>
#include<cstring>
typedef long long ll;
using namespace std;
void init()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}
#define posmod(v,m) ((v)%(m)+(m))%(m)
int main()
{
    init();
   //freopen("file.in","r",stdin);
    int n;
    string s;
    cin>>n>>s;
    if(n>26) cout<<-1;
    else{
    sort(s.begin(),s.end());
    string :: iterator ip;
    ip= unique(s.begin(),s.end());
    s.resize(distance(s.begin(),ip));
    cout<<n- s.length()<<"\n";}
    return 0;
}
