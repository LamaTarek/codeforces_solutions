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
    int n;
    cin>>n;
    int arr[n+1];
    arr[0]=0;
    for (int i = 1; i <= n; ++i) cin>>arr[i];
    ll energy=0,money=0;
    for (int i = 1; i <= n; ++i) {
        if(arr[i-1]>=arr[i])energy+=(arr[i-1]-arr[i]);
        else if(arr[i-1]<arr[i] && energy>=(arr[i]-arr[i-1])){
            energy-=(arr[i]-arr[i-1]);
        }
        else{
            arr[i-1]+=energy;
            energy=0;
            money+=abs(arr[i]-arr[i-1]);
        }
    }
    cout<<money<<"\n";
    return 0;
}
