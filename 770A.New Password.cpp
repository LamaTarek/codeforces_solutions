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
    int n,k;
    cin>>n>>k;
    char arr[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string s="";
    int i=0;bool flag=true;
    while (k--){s+=arr[i];i++;}
    n=n-s.length();
    for (int j = 1; j <= n; ++j) {
        if(flag)s+=s[0];
        else s+=s[1];
        flag=!flag;
    }
    cout<<s<<"\n";
    return 0;
}
