#include <iostream>
#include <queue>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;
typedef long long ll;
void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}
bool isDistinct(int x){
    string s= to_string(x);
    set<char>unique(s.begin(),s.end());
    if(s.size()==unique.size())return true;
    else return false;
}
int main() {
    init();
    int grid[5][5];
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            grid[i][j]=1;
        }
    }
    int count[4][4];
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            cin>>count[i][j];
        }
    }
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            if(count[i][j]%2!=0){
                grid[i][j]=!grid[i][j];
                grid[i+1][j]=!grid[i+1][j];
                grid[i-1][j]=!grid[i-1][j];
                grid[i][j+1]=!grid[i][j+1];
                grid[i][j-1]=!grid[i][j-1];

            }
        }
    }
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            cout<<grid[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
