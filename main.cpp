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
    int a,b,c,n,cnt=0;
    cin>>n;
    while (n--){
        cin>>a>>b>>c;
        if(a+b+c>=2)cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}