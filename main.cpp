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
typedef long long ll;
using namespace std;
void init()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}
#define posmod(v,m) ((v)%(m)+(m))%(m)
int main()
{
    init();
    //freopen("file.in","r",stdin);
    string s;
    cin >> s;
    if ((s[s.size() - 1] - '0') < 9)s[s.size() - 1] = ((s[s.size() - 1] - '0') + '1');
    else {
        for (int i = s.size() - 1; i >= 0; i--) {
            s[i]='0';
            if (i == 0)s.insert(0,"1");
            else {
                if (s[i - 1] != '9') {
                    s[i - 1] = (s[i - 1] - '0') + '1';
                    break;
                }
            }
        }
    }
    cout << s;
    return 0;
}