#include <iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include <set>
#include <cmath>
#include <map>
#include <cstring>
#include <limits.h>
typedef long long ll;
using namespace std;
void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main() {
    init();
    ll n, t;
    cin >> n >> t;
    int arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    int l = 0, r = 0, sum = 0, mx = 0, cnt = 0;
    while (l <= r && r < n) {
        if ((sum + arr[r]) <= t) { cnt++; sum += arr[r]; r++; }
        else {
            if (l == r && arr[r] > t) {
                sum = 0;
                cnt = 0;
                l++;
                r++;
            }
            else {
                sum -= arr[l];
                l++;
                cnt--;
            }
        }
        mx=max(mx,cnt);
    }
    cout << mx << "\n";
    return 0;
}
