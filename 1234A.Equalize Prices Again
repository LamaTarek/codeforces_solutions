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
    int t,n;
    cin>>t;
    while (t--){
        cin>>n;
        int arr[n];
        double sum=0;
        for (int i = 0; i < n; ++i) {
            cin>>arr[i];
            sum+=arr[i];
        }
        double av=sum/n;
        cout<<fixed<<setprecision(0)<<ceil(av)<<"\n";
    }
    return 0;
}
