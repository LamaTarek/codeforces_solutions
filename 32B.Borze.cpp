#include <iostream>
#include <queue>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;
typedef long long ll;
void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main() {
    init();
    string s1,s2="";
    cin>>s1;
    for (int i = 0; i < s1.size(); ++i) {
        if(s1[i]=='-'){
            if(s1[i+1]=='-')s2+= to_string(2);
            else s2+= to_string(1);
            i++;
        }else s2+= to_string(0);
    }
    cout<<s2<<"\n";
    return 0;
}
