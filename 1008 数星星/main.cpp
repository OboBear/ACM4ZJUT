#include "iostream"
#include "fstream"
using namespace std;
char map[105][105];
unsigned short M,N;

void clearMap()
{
    for (unsigned short i=0; i<M; i++) {
        for (unsigned short j=0; j<N; j++) {
            map[i][j] = '.';
        }
    }
}

void clearMapWithIndex(unsigned short MTemp,unsigned short NTemp)
{
    map[MTemp][NTemp]='.';
    
    if (MTemp + 1 < M && map[MTemp+1][NTemp] == '*') {
        clearMapWithIndex(MTemp+1,NTemp);
    }
    if (NTemp + 1 < N && map[MTemp][NTemp+1] == '*') {
        clearMapWithIndex(MTemp,NTemp+1);
    }
    
    if (MTemp - 1 >= 0 && map[MTemp-1][NTemp] == '*') {
        clearMapWithIndex(MTemp-1,NTemp);
    }
    
    if (NTemp - 1 >= 0 && map[MTemp][NTemp-1] == '*') {
        clearMapWithIndex(MTemp,NTemp-1);
    }
}

int main()
{
//     freopen("in","r",stdin);
//     freopen("out","w",stdout);
//    
    while (cin>>M>>N && (M || N)) {
//        clearMap();
        for (unsigned short i=0; i<M; i++) {
            for (unsigned short j=0; j<N; j++) {
                cin>>map[i][j];
            }
        }
        int number = 0;
        for (unsigned short i=0; i<M; i++) {
            for (unsigned short j=0; j<N; j++) {
                if (map[i][j] == '*') {
                    number++;
//                    clearMapWithIndex(i,j);
                }
            }
        }
        
        cout<<number<<endl;
    }
    return 0;
}