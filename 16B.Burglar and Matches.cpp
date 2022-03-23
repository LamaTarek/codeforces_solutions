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
    ll rucksack,n;
    cin>>rucksack>>n;
    pair<int,int> arr[n];
    for (int i = 0; i < n; ++i) cin>>arr[i].second>>arr[i].first;
    sort(arr, arr + n);
    ll cnt=0;
    for (int i = n-1; i >= 0 && rucksack>0; --i) {
        if(rucksack>=arr[i].second){
            cnt+=(arr[i].first*arr[i].second);
            rucksack-=arr[i].second;
        }else{
            cnt+=rucksack*arr[i].first;
            rucksack=0;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}
