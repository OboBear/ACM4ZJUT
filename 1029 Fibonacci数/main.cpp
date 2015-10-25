//#include "iostream"
//#include "fstream"
//#include "vector"
//#include "cmath"
//#include "algorithm"
//#include "cstdio"
//using namespace std;
//
//int f[47];
//
//int main()
//{
////    f[0]=0;
////    f[1]=1;
////    for (int i=2; i<=46; i++) {
////        f[i]=f[i-1]+f[i-2];
////    }
////    int n;
////    while (cin>>n) {
////        cout<<f[n]<<endl;
////    }
//    unsigned short a=60000;
//    cout<<a<<endl;
//    return 0;
//}

#include<stdio.h>
//int f[47];
unsigned short s[25];
int f[22];
int main()
{
    s[0]=0;
    s[1]=1;
    for (int i=2; i<25; i++) {
        s[i]=s[i-1]+s[i-2];
    }
    f[0]=s[23]+s[24];
    f[1]=s[24]+f[0];
    for (int i=2; i<22; i++) {
        f[i]=f[i-1]+f[i-2];
    }
    
    short n;
    while (scanf("%hd",&n)!=EOF) {
        if (n<=24) {
            printf("%d\n",s[n]);
        }
        else
        {
            printf("%d\n",f[n%25]);
        }
        
    }
    return 0;
}