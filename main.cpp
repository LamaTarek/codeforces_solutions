#include <iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include <set>
#include <cstring>
#include <map>
typedef long long ll;
using namespace std;
void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}
string noZero(string s){
    string a="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='0')a+=s[i];
    }
    return a;
}
int main(){
    int n1,n2,sum;
    cin>>n1>>n2;
    sum=n1+n2;
   if(stoi(noZero(to_string(sum)))==stoi(noZero(to_string(n1)))+ stoi(noZero(to_string(n2)))){
       cout<<"YES\n";
   }
   else cout<<"NO\n";
    return 0;
}