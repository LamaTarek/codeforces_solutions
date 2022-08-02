#include <iostream>
#include <queue>
#include <algorithm>
#include <set>
#include <cmath>
#include <stack>
#include <cstring>

using namespace std;
typedef long long ll;
void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main() {
    init();
    string x,y,result="";
    cin>>x>>y;
    for (int i = 0; i < x.length(); ++i) {
        if(x[i]==y[i])result+='0';
        else result+='1';
    }
    cout<<result<<"\n";
    return 0;
}
