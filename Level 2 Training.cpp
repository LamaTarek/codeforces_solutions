#include <iostream>
#include<string>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<vector>
#include<numeric>
#include<cstring>
typedef long long ll;
using namespace std;
void init()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}
#define posmod(v,m) ((v)%(m)+(m))%(m)
int toBinary(int n) {
    int cnt = 0;
    while (n) {
        if (n % 2 == 1) cnt++;
        n /= 2;
    }
    return cnt;
}
int freq[1001] = { 0 };
void frequency(int n) {
    for (int i = 1; i <= n; i++) {
        freq[toBinary(i)]++;
    }
}
int main()
{
    init();
    //freopen("file.in","r",stdin);
    int n, q, num;
    cin >> n >> q;
    frequency(n);
    while (q--) {
        cin >> num;
        cout << freq[num] << "\n";
    }
    return 0;
}
