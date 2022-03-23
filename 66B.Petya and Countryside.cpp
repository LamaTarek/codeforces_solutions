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
    int mx=1;
    for (int i = 0; i < n; ++i) cin>>arr[i];
    for (int i = 0; i < n; ++i) {
        int cnt=1;
        int j=i-1;
        int k=i+1;
        while (arr[j]<=arr[j+1] && j>=0){
            cnt++;
            j--;
        }
        while (arr[k]<=arr[k-1] && k<n){
            cnt++;
            k++;
        }
        mx=max(mx,cnt);
    }
    cout<<mx<<"\n";
    return 0;
}
