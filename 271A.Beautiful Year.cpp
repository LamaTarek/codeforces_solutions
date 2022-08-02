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
bool isDistinct(int x){
    string s= to_string(x);
    set<char>unique(s.begin(),s.end());
    if(s.size()==unique.size())return true;
    else return false;
}
int main() {
    init();
    int x;
    cin>>x;
    x++;
    while (!isDistinct(x))x++;
    cout<<x<<"\n";
    return 0;
}
