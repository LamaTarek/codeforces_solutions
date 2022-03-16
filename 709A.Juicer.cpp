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
    int n,b,d,weight,total=0,cnt=0;
    cin>>n>>b>>d;
    while (n--){
        cin>>weight;
        if(weight<=b){
            total+=weight;
            if(total>d){
                cnt++;
                total=0;
            }
        }
    }
    cout<<cnt<<"\n";
    return 0;
}
