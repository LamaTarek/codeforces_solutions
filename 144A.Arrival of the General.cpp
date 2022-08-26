#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

#define ll long long

using namespace std;

int main() {
    int n,min=107,max=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
        if(arr[i]<min)min=arr[i];
        if(arr[i]>max)max=arr[i];
    }
    int cnt=0;
    for (int i = 0; i < n; ++i) {
        if(arr[i]==max){
            cnt+=i;
            for (int j = i-1; j >= 0; --j,--i) {
                swap(arr[i],arr[j]);
            }
            break;
        }
    }
    for (int i = n-1; i >= 0; --i) {
        if(arr[i]==min){
            cnt+=(n-i-1);
            for (int j = i+1; j < n; ++j,i++) {
                swap(arr[i],arr[j]);
            }
            break;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}
