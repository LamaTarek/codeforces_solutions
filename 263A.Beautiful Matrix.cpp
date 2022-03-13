#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
typedef long long ll;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main() {
    init();
    int matrix[5][5];
    int row,col;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin>>matrix[i][j];
            if(matrix[i][j]==1){row=i;col=j;}
        }
    }
    cout<<abs(2-row)+abs(2-col)<<"\n";
    return 0;
}
