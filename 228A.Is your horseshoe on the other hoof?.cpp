#include <iostream>
#include <bits/stdc++.h>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;
typedef long long ll;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main() {
    init();
    int arr[4];
    for (int i = 0; i < 4; ++i) cin>>arr[i];
    sort(arr,arr+4);
    int cnt=0;
    for (int i = 0; i < 3; ++i) {
        if(arr[i]==arr[i+1])cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}
