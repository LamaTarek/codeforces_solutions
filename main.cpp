#include <iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include <set>
#include<vector>
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
bool is_prime(int n) {
    if (n <= 1)return 0;
    for (int i = 2; i <= n / i; i += 1 + (i & 1)) {
        if (n % i == 0)return 0;
    }
    return 1;
}
int factorize_(int n) {
    int cnt = 0;
    for (int i = 2; i <= n / i; i += 1 + (i & 1)) {
        if (n % i == 0) {
            cnt++;
            n = n % i;
        }
    }
    if (n > 1)cnt++;
    return cnt;
}
vector<ll> factorize(ll n) // sqrt(n)
{
    vector<ll> divisors;
    int cnt = 0;
    for (int i = 2; i <= n / i; i += 1 + (i & 1))
    {
        while (n % i == 0) {
            divisors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) divisors.push_back(n);
    return divisors;
}
int gen_divisors(int n) {         //O(sqrt(n))
    int cnt = 0;
    for (int i = 1; i <= n / i; ++i) {
        if (n % i == 0) {
            cnt++;
            if (i * i != n)cnt++;
        }
    }
    return cnt;
}
const int NN = 1007;
int p[NN];
vector<int>primes;
void seive() {
    memset(p, 1, sizeof p);
    p[0] = p[1] = 0;
    for (int i = 2; i < NN / i; ++i) {
        if (p[i]) {
            for (int j = i * i; j < NN; j += i) {
                p[j] = 0;
            }
        }
    }
    for (int i = 0; i < NN; i++) {
        if (p[i])primes.push_back(i);
    }
}
int main() {
    init();
    seive();
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    for (int i = 2; i < primes.size(); ++i) {
        if (is_prime(primes[i] + primes[i + 1] + 1) && (primes[i] + primes[i + 1] + 1) <= n)cnt++;
    }
    if (cnt >= k)cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
