#include <iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include <set>
#include <cstring>
#include <map>
typedef long long ll;
using namespace std;
void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main(){
    int r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    int arr[4];
    bool flag=false;
    for(int i=1;i<=r1-1;i++){
        set<int>s;
        arr[0]=i;    arr[1]=r1-i;
        arr[2]=d2-arr[1];  arr[3]=r2-arr[2];
        s.insert(arr[0]);  s.insert(arr[1]);
        s.insert(arr[2]);  s.insert(arr[3]);
        if( arr[0]+arr[2]==c1 && arr[1]+arr[3]==c2 && arr[0]+arr[3]==d1){
            if((arr[0]>0 && arr[0]<=9) && (arr[1]>0 && arr[1]<=9) && (arr[2]>0 && arr[2]<=9) && (arr[3]>0 && arr[3]<=9) && s.size()==4){flag= true; break;}
        }
    }
    if(flag) cout<<arr[0]<<" "<<arr[1]<<"\n"<<arr[2]<<" "<<arr[3]<<"\n";
    else cout<<-1<<"\n";
    return 0;
}                                   //   13          10      19     16
                                     // 12          3        9
                                   //   17          7       10
                                   //