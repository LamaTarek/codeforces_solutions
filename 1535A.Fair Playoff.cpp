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
int main() {
    init();
    //freopen("file.in","r",stdin);
    int arr[4];
    int t;
    cin>>t;
    while (t--){
        for(int i=0;i<4;i++)cin>>arr[i];
        int can1= max(arr[0],arr[1]);
        int can2= max(arr[2],arr[3]);
        sort(arr,arr+4,greater<int>());
        if((can1==arr[0] && can2==arr[1])||(can1==arr[1] && can2==arr[0]))cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
