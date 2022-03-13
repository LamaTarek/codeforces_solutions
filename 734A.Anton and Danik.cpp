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
    int n,countA=0,countD=0;
    string s;
    cin>>n>>s;
    countA=count(s.begin(),s.end(),'A');
    countD=count(s.begin(),s.end(),'D');
    if(countA>countD)cout<<"Anton\n";
    else if(countD>countA)cout<<"Danik\n";
    else{
        cout<<"Friendship\n";
    }
    return 0;
}
