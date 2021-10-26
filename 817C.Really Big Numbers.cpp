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
ll n, s, mid;
bool can(ll k) {
    int sum = 0;
    while (k > 0) {
        sum += k % 10;
        k /= 10;
    }
    return mid - sum >= s;
}
int main() {
    init();
    cin >> n >> s;
    ll l = 1, r = n, ans = 0;
    while (l <= r) {
        mid = (l + r) / 2;
        if (can(mid)) r = mid - 1;
        else {
            l = mid + 1;
            ans = mid;
        }
    }
    cout << n-ans << "\n";
    return 0;
}
