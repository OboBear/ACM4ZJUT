//#include "iostream"
//#include "fstream"
//#include "vector"
//#include "cmath"
//#include "algorithm"
//#include "cstdio"
//using namespace std;
//
//int main()
//{
//    int n;
//    while (scanf("%d",&n)!=EOF) {
//        int nn = n*n;
//        nn=nn-n + 1;
//        for (int i=0; i<n; i++) {
//            if (i) {
//                printf("+");
//            }
//            printf("%d",nn);
//            nn+=2;
//        }
//        printf("\n");
//    }
//    return 0;
//}


#include "stdio.h"
int main()
{
    int n;
    int nn;
    while (scanf("%d",&n)!=EOF) {
        nn = n*n-n + 1;
        for (int i=0; i<n; i++) {
            if (i) {
                printf("+");
            }
            printf("%d",nn);
            nn+=2;
        }
        printf("\n");
    }
}