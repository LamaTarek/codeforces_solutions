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
    int n,num,sum,solv=0;
    cin>>n;
    while (n--){
        sum=0;
        for (int i = 0; i < 3; ++i) {
            cin>>num;
            sum+=num;
        }
        if(sum>=2)solv++;
    }
    cout<<solv<<"\n";
    return 0;
}
