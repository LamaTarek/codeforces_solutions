#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ll long long

using namespace std;
int main() {
   // freopen("input.txt","r",stdin);
  //  freopen("output.txt", "w", stdout);
  int n,a,b,current=0,mx=0;
  cin>>n;
  int arr[n];
    while (n--){
        cin>>a>>b;
        current-=a;
        mx=max(mx,current);
        current+=b;
        mx=max(mx,current);
    }
    cout<<mx<<"\n";
    return 0;
}
