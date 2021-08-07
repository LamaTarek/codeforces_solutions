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
    int n,x;
    cin>>n>>x;
    for(int i=n;i<=x;i++)
    {
        if(i>9 && i%2==0) cout<<"even\n";
        else if(i>9 && i%2!=0) cout<<"odd\n";
        else if(n>=1 && i<=9){
            switch (i) {
                case 1:cout<<"one\n";
                    break;
                case 2:cout<<"two\n";
                    break;
                case 3:cout<<"three\n";
                    break;
                case 4:cout<<"four\n";
                    break;
                case 5:cout<<"five\n";
                    break;
                case 6:cout<<"six\n";
                    break;
                case 7:cout<<"seven\n";
                    break;
                case 8:cout<<"eight\n";
                    break;
                case 9:cout<<"nine\n";
                    break;
                default:cout<<"zero\n";
            }
        }
    }
    return 0;
}
