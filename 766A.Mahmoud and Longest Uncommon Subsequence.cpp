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
    string s1,s2;
    cin>>s1>>s2;
    if(s1==s2)cout<<-1<<"\n";
    else cout<<max(s1.length(),s2.length())<<"\n";
    return 0;
}
