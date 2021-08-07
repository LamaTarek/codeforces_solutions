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
bool palindrome(string s)
{
    string o=s;
    reverse(s.begin(),s.end());
    return o==s;
}
string binary_representation(unsigned long long s){
    string ret="";
    while (s){
        ret+= to_string(s%2);
        s/=2;
    }
    reverse(ret.begin(),ret.end());
    return ret;
}
int main()
{
    init();
    //freopen("file.in","r",stdin);
    unsigned long long s;
    cin>>s;
    bool flag= palindrome(binary_representation(s));
    if(flag && s%2!=0)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
