#include <iostream>
#include <bits/stdc++.h>
#include <queue>
#include <algorithm>
#include <set>
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
    int arr[n];
    int officer=0,untreated=0;
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
        if(arr[i]>0)officer+=arr[i];
        else{
            if(officer>0)officer--;
            else untreated++;
        }
    }
    cout<<untreated<<"\n";
    return 0;
}
