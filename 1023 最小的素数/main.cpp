//#include "iostream"
//#include "fstream"
//#include "vector"
//#include "cmath"
//#include "algorithm"
//#include "string"
//#include <map>
//using namespace std;
//int main()
//{
//    //         freopen("in","r",stdin);
//    //         freopen("out","w",stdout);
//    int n;
//    char result[3][3]={11,-1,17,41,-1,47,71,-1,79},input[2];
//    scanf("%d",&n);
//    getchar();
//    while (n--) {
//        gets(input);
//        printf("%d\n",result[(input[0]-'A')%3][(input[1]-'A')%3]);
//    }
//    return 0;
//}

/*
 1000
 AA
 AB
 OJ
 */


#include<stdio.h>
int main(){unsigned short n;char r[3][3]={11,-1,17,41,-1,47,71,-1,79},i[2];scanf("%hd",&n);getchar();while (n--){i[0]=getchar();i[1]=getchar();getchar();printf("%hhd\n",r[(i[0]-'A')%3][(i[1]-'A')%3]);}}




