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
    int n;
    cin>>n;
    string arr[n];
    for (int i = 0; i < n; ++i) cin>>arr[i];
    int groups=1;
    for (int i = 1; i < n; ++i) {
        if(arr[i][0]==arr[i-1][arr[i-1].length()-1])groups++;
    }
    cout<<groups<<"\n";
    return 0;
}
