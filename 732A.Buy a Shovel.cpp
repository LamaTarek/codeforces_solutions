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
    int n,cnt=1,coin;
    cin>>n>>coin;
    while (true){
        int price=n*cnt;
        if(price%10==0 || (price-coin)%10==0){
            cout<<cnt<<"\n";
            return 0;
        }
        cnt++;
    }
}
