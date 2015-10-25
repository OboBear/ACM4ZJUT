#include "iostream"
#include "fstream"
#include "vector"
#include "cmath"
#include "algorithm"
using namespace std;
//int map[1005][1005];
int map[10005];
bool com(int a,int b)
{
    return a>b;
}
int main()
{
//         freopen("in","r",stdin);
//         freopen("out","w",stdout);
    int n,m,a,b,c,d,e;
    cin>>n;
    while (n--) {
        cin>>m;
        for (int i=0; i<m; i++) {
            cin>>map[i];
        }
        sort(map,map+m,com);
        cin>>a>>b>>c>>d>>e;
        bool flag = false;
        a+=b;
        b=c/a;
        for (int i=0; i<b&&i<m; i++) {
            d+=map[i];
            if (d>=e) {
                flag=true;
                break;
            }
        }
        if (flag) {
            puts("Tyr is great!");
        }
        else
            puts("Tyr is not so great!");
        
    }
    return 0;
}

