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
    int n;
    cin>>n;
    int arr1[n],arr2[n];
    priority_queue<int>q;
    for (int i = 0; i < n; ++i) {cin>>arr1[i];arr2[i]=arr1[i];}
    sort(arr2,arr2+n,greater<int>());
    int j=0;
    for (int i = 0; i < n; ++i) {
        q.push(arr1[i]);
        while (q.top()==arr2[j]){
            cout<<q.top()<<" ";
            q.pop();
            j++;
        }
        cout<<"\n";
    }
    return 0;
}
