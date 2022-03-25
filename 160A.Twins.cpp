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
    int arr[n];
    int sum=0,cnt=0,t=0;
    for (int i = 0; i < n; ++i) {cin>>arr[i];sum+=arr[i];}
    sort(arr,arr+n,greater<int>());
    int i=0;
    while (t<=sum && i<n){
        cnt++;
        t+=arr[i];
        sum-=arr[i];
        i++;
    }
    cout<<cnt<<"\n";
    return 0;
}
