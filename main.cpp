#include <iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<map>
#include <queue>
#include <cstring>
#include <set>
#define clr(x,val) memset(x,val,sizeof(x))
typedef long long ll;
using namespace std;
void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}
map<string ,int>mp;
int main() {
    init();
    mp["Tetrahedron"]=4;
    mp["Cube"]=6;
    mp["Octahedron"]=8;
    mp["Dodecahedron"]=12;
    mp["Icosahedron"]=20;
    int q,sum=0;
    cin>>q;
    string s;
    while (q--){
        cin>>s;
        sum+=mp[s];
    }
    cout<<sum<<"\n";
    return 0;
}