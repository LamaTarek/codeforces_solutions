#include <iostream>
#include <bits/stdc++.h>
#include <queue>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;
typedef long long ll;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main() {
    init();
    string sum;
    cin>>sum;
    int n=sum.length()-(sum.length()/2);
    char arr[n];
    int j=0;
    for (int i = 0; i < sum.length(); ++i) {
        if(sum[i]!='+'){arr[j]=sum[i]; j++;}
    }
    sort(arr,arr+n);
    cout<<arr[0];
    for (int i = 1; i < n; ++i) {
        cout<<'+'<<arr[i];
    }
    cout<<"\n";
    return 0;
}
