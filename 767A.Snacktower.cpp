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
int main() {
    init();
    priority_queue<int>q;
    int n,num,order;
    cin>>n;
    order=n;
    while (n--){
        cin>>num;
        if(num!=order){cout<<endl; q.push(num);}
        else{
            q.push(num);
            while (!q.empty() && q.top()==order){
                cout<<q.top()<<" ";
                q.pop();
                order--;
            }
            cout<<endl;
        }
    }
    return 0;
}
