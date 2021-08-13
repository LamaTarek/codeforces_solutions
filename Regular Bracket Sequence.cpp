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
    string s;
    cin>>s;
    stack<char>st;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(')st.push(s[i]);
        else if(!st.empty()){
            cnt+=2;
            st.pop();
        }
    }
    cout<<cnt<<"\n";
    return 0;
}
