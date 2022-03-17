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
    int n,one=0,two=0,three=0,num;
    cin>>n;
    int arr1[n],arr2[n],arr3[n];
    for (int i = 0; i < n; ++i) {
        cin>>num;
        if(num==1){arr1[one]=i+1;one++;}
        else if(num==2){arr2[two]=i+1;two++;}
        else if(num==3){arr3[three]=i+1;three++;}
    }
    int teams=min(one,min(two,three));
    cout<<teams<<"\n";
    for (int i = 0; i < teams; ++i) {
        cout<<arr1[i]<<" "<<arr2[i]<<" "<<arr3[i]<<"\n";
    }
    return 0;
}
