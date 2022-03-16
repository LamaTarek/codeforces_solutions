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
    string s;
    cin>>n;
    while (n--){
        cin>>s;
        if(s.length()>10){
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<"\n";
        }else cout<<s<<"\n";
    }
    return 0;
}
