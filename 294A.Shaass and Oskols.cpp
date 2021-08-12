#include <iostream>
#include<string>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<vector>
#include<numeric>
#include<cstring>
#include <set>
#include <stack>
#include <deque>
#include <queue>
typedef long long ll;
using namespace std;
void init()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main() {
    init();
    //freopen("file.in","r",stdin);
    int n;
    cin >> n;
    int wires[n + 1];
    wires[0]=0;
    for (int i = 1; i <= n; i++)cin >> wires[i];
    int q, index, bird;
    cin >> q;
    while (q--) {
        cin >> index >> bird;
        if (index != 1)wires[index - 1] += (bird - 1);
        if (index != n)wires[index + 1] += (wires[index] - bird);
        wires[index] = 0;
    }
    for (int i = 1; i <= n; ++i) {
        cout << wires[i] << "\n";
    }
    return 0;
}
