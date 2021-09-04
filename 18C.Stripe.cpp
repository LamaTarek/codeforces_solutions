#include <iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include <set>
#include <cstring>
#include <map>
#include <vector>
#include <limits.h>
typedef long long ll;
using namespace std;
void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int freq[10000001];
int main(){
    int n;
    cin>>n;
    ll arr[n];
    ll sum=0,stripe=0,cnt=0;
    for (int i = 0; i < n; ++i) {cin>>arr[i];  sum+=arr[i];}
    for (int i = 0; i < n-1; ++i) {
        stripe+=arr[i];
        if(sum-stripe==stripe)cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}
