#include <iostream>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;
typedef long long ll;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main() {
    init();
    string s;
    cin>>s;
    int low=0,upp=0;
    for (int i = 0; i < s.length(); ++i) {
        if(s[i]>='a'&&s[i]<='z')low++;
        else upp++;
    }
    if(upp>low){
        for (int i = 0; i < s.length(); ++i) {
            s[i]= toupper(s[i]);
        }
    }else{
            for (int i = 0; i < s.length(); ++i) {
                s[i]= tolower(s[i]);
            }
    }
    cout<<s<<"\n";
    return 0;
}
