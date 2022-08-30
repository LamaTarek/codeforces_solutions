#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main() {
   // freopen("input.txt","r",stdin);
  //  freopen("output.txt", "w", stdout);
  int n,l=0,r=0,n1,n2;
  cin>>n;
    for (int i = 1; i <= n; ++i) {
        cin>>n1>>n2;
        l+=n1; r+=n2;
    }
    cout<<min(l,n-l)+min(r,n-r)<<"\n";
    return 0;
}
