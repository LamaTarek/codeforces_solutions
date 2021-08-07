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
    if(n%2==0){
        cout<<n/2<<"\n";
        for (int i = 1; i <= n/2 ; ++i) {
            if(i==1)cout<<2;
            else cout<<" "<<2;
        }
    }
    else
    {
        cout<<(n-3)/2+1<<"\n";
        int i=1;
        for(;i<=(n-3)/2;i++)
        {
            if(i==1)cout<<2;
            else cout<<" "<<2;
        }
        if(i==1)cout<<3<<"\n";
        else cout<<" "<<3<<"\n";
    }
    return 0;
}