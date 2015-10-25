#include "iostream"
#include "fstream"
#include "vector"
#include "cmath"
#include "algorithm"
#include "string"
using namespace std;
int map[105][105];


int main()
{
    //         freopen("in","r",stdin);
    //         freopen("out","w",stdout);
    int n,m,x,sum=0,temp;
    scanf("%d",&n);
    while (n--) {
        scanf("%d%d",&m,&x);
        for (int i=0; i<m; i++) {
            scanf("%d",map[0]+i);
        }
        for (int i=1;i<=x;i++){
            map[i-1][m] = map[i-1][0];
            for (int j = m-1; j >= 0; j--) {
                map[i][j] = (map[i-1][j+1]+map[i-1][j])%100;
                cout<<map[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}



