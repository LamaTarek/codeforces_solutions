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
    cin>>n;
    string c="ROYGBIV";
    string hc="GBIV";
    int i=n/7;
    while (i--){
        cout<<c;
    }
    i=n%7;
    for (int j = 0; j < 4 && i>0; ++j) {
        cout<<hc[j];
        i--;
        if(i!=0 && j==3) j=-1;
    }
    cout<<"\n";
    return 0;
}