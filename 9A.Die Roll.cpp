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
    int a,b;
    cin>>a>>b;
    int c=7- max(a,b);
    int g=__gcd(c,6);
    cout<<c/g<<"/"<<6/g<<"\n";
    return 0;
}
