#include "iostream"
#include "fstream"
using namespace std;
char map[105][105];
unsigned short M,N;

void clearMap()
{
    for (unsigned short i=0; i<M; i++) {
        for (unsigned short j=0; j<N; j++) {
            map[i][j] = '*';
        }
    }
}

void clearMapWithIndex(unsigned short MTemp,unsigned short NTemp)
{
    int MTempMaps[8] = {1,0,-1,0,-1,1,-1,1};
    int NTempMaps[8] = {0,1,0,-1,-1,1,1,-1};
    
    for (int i = 0; i<8; i++) {
        int mm = MTemp + MTempMaps[i];
        int nn = NTemp + NTempMaps[i];
        if (mm >= 0 && mm < M && nn >= 0 && nn < N && map[mm][nn] == '@') {
            map[mm][nn]='*';
            clearMapWithIndex(mm,nn);
        }
    }
}

int main()
{
    //     freopen("in","r",stdin);
    //     freopen("out","w",stdout);
    //
    while (cin>>M>>N && (M || N)) {
        
        clearMap();
        for (unsigned short i=0; i<M; i++) {
            for (unsigned short j=0; j<N; j++) {
                cin>>map[i][j];
            }
        }
        int number = 0;
        for (unsigned short i=0; i<M; i++) {
            for (unsigned short j=0; j<N; j++) {
                if (map[i][j] == '@') {
                    map[i][j] = '*';
                    number++;
                    clearMapWithIndex(i,j);
                }
            }
        }
        cout<<number<<endl;
    }
    return 0;
}