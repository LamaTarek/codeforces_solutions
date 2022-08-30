#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main() {
   // freopen("input.txt","r",stdin);
  //  freopen("output.txt", "w", stdout);
  int arr[4];
    for (int i = 0; i < 4; ++i) cin>>arr[i];
    int n;
    cin>>n;
    set<int>s;
    for (int i = 0; i < 4; ++i) {
        for (int j = arr[i]; j <= n; j+=arr[i]) {
            s.insert(j);
        }
    }
    cout<<s.size()<<"\n";
    return 0;
}
//2 3 4 6 8 9 10 12 14 15 16 18 20 21 22 24
//1 7 11 13 17 19 23
