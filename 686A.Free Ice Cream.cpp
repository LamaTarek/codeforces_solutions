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
    ll n,d,distress=0,packs;
    char sign;
    cin>>n>>d;
    while (n--){
        cin>>sign>>packs;
        if(sign=='+')d+=packs;
        else{
            if(packs<=d)d-=packs;
            else distress++;
        }
    }
    cout<<d<<" "<<distress<<"\n";
    return 0;
}
