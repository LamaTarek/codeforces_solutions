#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

#define ll long long

using namespace std;

int main() {
    int n;
    cin>>n;
    if(n&1)cout<<-1<<"\n";
    else{
        int arr[n+1];
        for (int i = 1; i <= n; ++i) arr[i]=i;
        for (int i = 1; i < n; i+=2) {
            swap(arr[i],arr[i+1]);
        }
        for (int i = 1; i <= n; ++i) {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
