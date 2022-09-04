#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ll long long

using namespace std;
bool isEven(int n){return n%2==0;}
int main() {
    // freopen("input.txt","r",stdin);
    //  freopen("output.txt", "w", stdout);
    int n,cnt=0,m,s=0;
    cin>>n;
    forn(i,n){
        cin>>m;
        s+=m;
    }
    n++;
    for (int i = 1; i <= 5; ++i) {
        if((s+i)%n!=1)cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}
