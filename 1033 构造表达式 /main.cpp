
/*
题目错了都敢放出来
*/


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
//    int a,b,c;
//    int n;
//    scanf("%d",&n);
//    while (n--) {
//        scanf("%d%d%d",&a,&b,&c);
//        if (a+b==c) {
//            printf("%d+%d=%d\n",a,b,c);
//        }
//        else if(a-b==c)
//        {
//            printf("%d-%d=%d\n",a,b,c);
//        }
//        else if(b-a==c)
//        {
//            printf("%d-%d=%d\n",b,a,c);
//        }
//        else if(a*b==c)
//        {
//            printf("%d*%d=%d\n",a,b,c);
//        }
//        else if(b!=0&&a/b==c)
//        {
//            printf("%d/%d=%d\n",a,b,c);
//        }
//        else if(a!=0&&b/a==c)
//        {
//            printf("%d/%d=%d\n",b,a,c);
//        }
//        else printf("None\n");
//        
//    }
//    return 0;
//}




//#include <stdio.h>
//#define S(s) a s b==c
//#define E(s) else if(S(s))
//#define G goto l1;
//#define O o[2]=
//int main(){
//    int a,b,c,n;
//    char o[]="%d+%d=%d\n";
//    scanf("%d",&n);
//    while (n--) {
//        scanf("%d%d%d",&a,&b,&c);
//        if (S(+)) {
//            O'+';
//            G
//        }
//        E(-)
//        {
//            O'-';
//            G
//        }
//        E(*)
//        {
//            O'*';
//            G
//        }
//        else if(b!=0&&a/b==c)
//        {
//            O'/';
//            G
//        }
//        E(-)
//        {
//            O'-';
//        }
//        else if(a!=0&&b/a==c)
//        {
//            O'/';
//        }
//        else goto l2;
//        b=a+b;
//        a=b-a;
//        b=b-a;
//    l1:printf(o,a,b,c);
//        goto l3;
//    l2:printf("None\n");
//    l3:;
//        
//    }
//    return 0;
//}



//#include <stdio.h>
//int main(){int a,b,c,n;scanf("%d",&n);while(n--){scanf("%d%d%d",&a,&b,&c);if(a+b==c){printf("%d+%d=%d\n",a,b,c);}else if(a-b==c){printf("%d-%d=%d\n",a,b,c);}else if(b-a==c){printf("%d-%d=%d\n",b,a,c);}else if(a*b==c){printf("%d*%d=%d\n",a,b,c);}else if(b!=0&&a/b==c){printf("%d/%d=%d\n",a,b,c);}else if(a!=0&&b/a==c){printf("%d/%d=%d\n",b,a,c);}else printf("None\n");}}

#include <stdio.h>
#define S(s) a s b==c
#define E(s) else if(S(s))
#define G goto l1;
#define O o[2]=
int main(){int a,b,c,n;char o[]="%d+%d=%d\n";scanf("%d",&n);while(n--){scanf("%d%d%d",&a,&b,&c);if(S(+)){O'+';G}E(-){O'-';G}E(*){O'*';G}else if(b!=0&&a/b==c){O'/';G}E(-){O'-';}else if(a!=0&&b/a==c){O'/';}else goto l2;b=a+b;a=b-a;b=b-a;l1:printf(o,a,b,c);goto l3;l2:printf("None\n");l3:;}return 0;}





