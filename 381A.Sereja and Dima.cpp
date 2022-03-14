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
    int n,s=0,d=0;
    cin>>n;
    int arr[n];
    bool flag=true; //s turn
    for (int i = 0; i < n; ++i) cin>>arr[i];
    int i=0,j=n-1;
    while (i<=j){
        if(arr[j]>=arr[i]){
            if(flag)s+=arr[j];
            else d+=arr[j];
            j--;
        }else{
            if(arr[i]>arr[j]){
                if(flag)s+=arr[i];
                else d+=arr[i];
                i++;
            }
        }
        flag=!flag;
    }
    cout<<s<<" "<<d<<"\n";
    return 0;
}
