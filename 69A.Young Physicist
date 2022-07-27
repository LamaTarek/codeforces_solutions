#include <iostream>
#include <queue>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;
typedef long long ll;
void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main() {
    init();
    int n,sum;
    cin>>n;
    int arr[n][3];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        sum=0;
        for (int j = 0; j < n; ++j) {
            sum+=arr[j][i];
        }
        if(sum!=0){cout<<"NO\n";return 0;}
    }
    cout<<"YES\n";
    return 0;
}
