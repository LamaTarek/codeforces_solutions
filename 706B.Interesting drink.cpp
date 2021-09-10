#include <iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include <set>
#include <cstring>
#include <map>
#include <vector>
#include <limits.h>
typedef long long ll;
using namespace std;
void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main() {
    int n,q,num;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; ++i) cin>>v[i];
    sort(v.begin(),v.end());
    cin>>q;
    while (q--){
        cin>>num;
        cout<<upper_bound(v.begin(),v.end(),num)-v.begin()<<"\n";
    }
    return 0;
}
