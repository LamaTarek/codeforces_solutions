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
int n;
ll arr[200001];
bool can(int k) {
    int minIndex = 0, maxIndex = k-1;
    while (maxIndex <= n - 1) {
        if (arr[maxIndex] - arr[minIndex] <= 5)return true;
        else { minIndex++; maxIndex++; }
    }
    return false;
}
int main() {
    init();
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> arr[i];
    sort(arr, arr + n);
    int l = 1, r = n, mid, ans;
    while (l <= r) {
        mid = (l + r) / 2;
        if (can(mid)) { ans = mid; l = mid + 1; }
        else r = mid - 1;
    }
    cout << ans << "\n";
    return 0;
}
