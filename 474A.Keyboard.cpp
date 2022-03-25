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
    char ch;
    string s,keyBoard="qwertyuiopasdfghjkl;zxcvbnm,./";
    cin>>ch>>s;
    for (int i = 0; i < s.length(); ++i) {
        for (int j = 0; j < keyBoard.length(); ++j) {
            if(s[i]==keyBoard[j]){
                if(ch=='R')cout<<keyBoard[j-1];
                else cout<<keyBoard[j+1];
            }
        }
    }
    cout<<"\n";
    return 0;
}
