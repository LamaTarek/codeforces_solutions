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
    stack<int>st;
    int n,action,id;
    cin>>n;
    while (n--){
        cin>>action;
        if(action==1){
            cin>>id;
            st.push(id);
        }
        else if(action==2 && !st.empty()) st.pop();
        else if(action==3 && !st.empty()) cout<<st.top()<<"\n";
    }
    return 0;
}