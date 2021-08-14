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
    for (int i = s.size()-1; i >= 0; i--) {
        if(st.empty() || st.top()!=s[i])st.push(s[i]);
        else st.pop();
    }
    while (!st.empty()){
        cout<<st.top();
        st.pop();
    }
    cout<<"\n";
    return 0;
}