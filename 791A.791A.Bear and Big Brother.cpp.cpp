#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
typedef long long ll;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main() {
    init();
    int a,b,year=0;
    cin>>a>>b;
    while (a<=b){
        a*=3;
        b*=2;
        year++;
    }
    cout<<year<<"\n";
    return 0;
}
