#include <iostream>
#include<string>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<vector>
#include<numeric>
#include<cstring>
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
    int r,c;
    cin>>r>>c;
    char arr[r+2][c+2];
    for (int i = 0; i < r+2; ++i) {
        for (int j = 0; j < c+2; ++j) {
            arr[i][j]='.';
        }
    }
    for (int i = 1; i <= r; ++i) {
        for (int j = 1; j <= c; ++j) {
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < r+2; ++i) {
        for (int j = 0; j < c+2; ++j) {
            if(arr[i][j]=='o')
            {
                arr[i][j]='x';
                if(arr[i][j+1]!='o')arr[i][j+1]='x';
                if(arr[i][j-1]!='o')arr[i][j-1]='x';
                if(arr[i-1][j]!='o')arr[i-1][j]='x';
                if(arr[i-1][j-1]!='o')arr[i-1][j-1]='x';
                if(arr[i-1][j+1]!='o')arr[i-1][j+1]='x';
                if(arr[i+1][j]!='o')arr[i+1][j]='x';
                if(arr[i+1][j-1]!='o')arr[i+1][j-1]='x';
                if(arr[i+1][j+1]!='o') arr[i+1][j+1]='x';
            }
        }
    }
    for (int i = 1; i <= r; ++i) {
        for (int j = 1; j <= c; ++j) {
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
