#include <iostream>
#include <bits/stdc++.h>
#include <queue>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;
typedef long long ll;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main() {
    init();
    int n,indx;
    cin>>n>>indx;
    int arr[n+7];
    int distance=1,cnt=0;
    for (int i = 1; i <= n; ++i) cin>>arr[i];
    if(arr[indx]==1)cnt++;
    while (indx-distance>=1 || indx+distance<=n){
        int s=0;
        if(indx-distance>=1){s+=arr[indx-distance]; arr[indx-distance]=0;}
        if(indx+distance<=n){s+=arr[indx+distance]; arr[indx+distance]=0;}
        if(s==2)cnt+=2;
        else if(s==1 && indx-distance>=1 && indx+distance>n)cnt++;
        else if(s==1 && indx-distance<1 && indx+distance<=n)cnt++;
        distance++;
    }
    cout<<cnt<<"\n";
    return 0;
}
