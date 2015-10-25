#include "iostream"
#include "fstream"
#include "vector"
#include "cmath"
#include "algorithm"
using namespace std;
int map[1005][1005];

int main()
{
    //     freopen("in","r",stdin);
    //     freopen("out","w",stdout);
    int n,m;
    cin>>n;
    while (n--) {
        cin>>m;
        for (int i=0; i<m; i++) {
            for (int j=0; j<m; j++) {
                cin>>map[i][j];
            }
        }
        bool flag = true;
        for (int i=0; i<m; i++) {
            for (int j=0; j<m/2; j++) {
                if(map[i][j] != map[i][m-j-1])
                {
                    flag = false;
                    goto ll;
                }
            }
        }
        for (int i=0; i<m; i++) {
            for (int j=0; j<m/2; j++) {
                if(map[j][i] != map[m-j-1][i])
                {
                    flag = false;
                    goto ll;
                }
            }
        }
        
    ll:
        
        if (flag) {
            cout<<"yes\n";
        }
        else
        {
            cout<<"no\n";
        }
        
        
    }
    
    return 0;
}