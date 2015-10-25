#include "iostream"
#include "cmath"
#include "fstream"
#include "cstdio"
using namespace std;

int map[30];
//2的n次方
int map2[30];

void makeMap2()
{
    map2[1] = 1;
    map2[2] = 2;
    int i = 3;
    while (i < 30) {
        map2[i] = map2[i-1] * 2;
        i++;
    }
}

int main()
{
    makeMap2();
    
    int N;
   // freopen("in","r",stdin);
   // freopen("out","w",stdout);
    
    map[0]=1;

    while( cin >> N && N)
    {
        int sqN = sqrt(N);
        int X = 0,K = 0;
        
        for(int i = sqN ; i>1 ; i--)
        {
            //过滤掉非约数
            if(!(N%i))
            {
                map[1] = i;
                int Ktemp = 1;
                while(map[Ktemp] < N)
                {
                    Ktemp ++;
                    map[Ktemp] = map[Ktemp - 1] * map[Ktemp - 1];
                }
                int tempProduct = 1 ;
                int KtempSum = 0;
                //直接找到了，Ktemp就是K
                if (map[Ktemp] == N) {
                    tempProduct = N;
                    KtempSum = map2[Ktemp];
                }
                else
                {
                    int tempZ = 0;
                    
                    while(tempProduct < N && Ktemp > 0)
                    {
                        tempZ = tempProduct * map[Ktemp];
                        
                        if( tempZ <= N)
                        {
                            tempProduct = tempZ;
                            KtempSum += map2[Ktemp];
                            if (tempZ == N) {
                                break;
                            }
                        }
                        Ktemp --;
                    }
                }
                
                if (tempProduct == N) {
                    X = i;
                    K = KtempSum;
                    
                    break;
                }
            }
        }
        cout<<X<<" "<<K<<endl;
    }
    return 0;
}




