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
    int n,h,height,width=0;
    cin>>n>>h;
    while (n--){
        cin>>height;
        if(height>h)width+=2;
        else width+=1;
    }
    cout<<width<<"\n";
    return 0;
}
