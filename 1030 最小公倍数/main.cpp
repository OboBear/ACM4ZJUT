#include "iostream"
#include "fstream"
#include "vector"
#include "cmath"
#include "algorithm"
#include "cstdio"
using namespace std;
int n,m,temp,copyN,copyM;
int main()
{
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        if (n>m) {
            temp = m;
            m = n;
            n = temp;
        }
        copyN = n;
        copyM = m;
        while ((temp = m%n)!=0) {
            m = n;
            n = temp;
        }
        temp = copyN/n*copyM;
        printf("%d\n",temp);
        
    }
    
    return 0;
}