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
   int n,k;
   cin>>n>>k;
   int arr[n+1];
   for (int i = 1; i <= n; ++i) {
       cin>>arr[i];
   }
   if(n%k!=0) cout<<-1<<"\n";
   else{
       arr[0]=0;
       sort(arr,arr+n+1);
       int i=1,j=n/k;           //two_pointers
       ll sum=0;
       while (j<=n){
           sum+=(arr[j]-arr[i]);
           i=j+1;
           j+=(n/k);
       }
       cout<<sum<<"\n";
   }
   return 0;
}
