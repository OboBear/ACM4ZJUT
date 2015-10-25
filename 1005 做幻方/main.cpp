#include "iostream"
#include "fstream"
#include "iomanip"
using namespace std;

int map[35][35];

int main()
{
//     freopen("in","r",stdin);
//     freopen("out","w",stdout);
//
    int n;
    while (cin>>n && n) {
        
        
        
        int i,j;
        for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                map[i][j] = 0;
            }
        }
        
        
        i = n - 1;
        j = n/2;
        int n2 = n*n;
        
        for (int z = 1; z <= n2; z++) {
            map[i][j] = z;
            i+=1;
            j+=1;
            if (i >= n) {
                i = 0;
            }
            if (j >= n) {
                j = 0;
            }
            if (map[i][j]) {
                i -= 2;
                j -= 1;
                if (i < 0) {
                    i += n;
                }
                if (j < 0) {
                    j += n;
                }
                while (map[i][j]) {
                    j -= 1;
                    if (i < 0) {
                        i += n;
                    }
                }
            }
        }
        
        for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                cout<<setw(3)<<map[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}