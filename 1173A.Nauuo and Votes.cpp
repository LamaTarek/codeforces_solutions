#include <iostream>
#include<string>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<vector>
#include<numeric>
#include<cstring>
#include <set>
#include <stack>
#include <deque>
#include <queue>
typedef long long ll;
using namespace std;
void init()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main() {
    init();
    //freopen("file.in","r",stdin);
    int x,y,z;
    cin>>x>>y>>z;
    if(z==0){
        if(x>y)cout<<"+\n";
        else if(y>x)cout<<"-\n";
        else cout<<"0\n";
    }
    else{
        if(x==y)cout<<"?\n";
        else if(x>y){
            if(x>y+z)cout<<"+\n";
            else cout<<"?\n";
        }
        else{
            if(y>x+z)cout<<"-\n";
            else cout<<"?\n";
        }
    }
    return 0;
}
