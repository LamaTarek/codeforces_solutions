#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
typedef long long ll;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main() {
    init();
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) cin>>arr[i];
    sort(arr,arr+n);
    for (int i = 0; i < n; ++i) cout<<arr[i]<<" ";
    return 0;
}
