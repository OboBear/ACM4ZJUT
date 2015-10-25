//#include "iostream"
//#include "fstream"
//using namespace std;
//short l[150005];
//int p,sum=0;
//int main()
//{
////     freopen("in","r",stdin);
////     freopen("out","w",stdout);
////
//    
//    scanf("%d",&p);
//    bool flag = true;
//    for (int i=0; i<p; i++) {
//        scanf("%hd",l+i);
//    }
//    
//    for (int i=0; i<p; i++) {
//        if (flag) {
//            if (l[i]>l[i+1] || i==p-1) {
//                sum+= l[i];
//                flag = false;
//            }
//        }
//        else
//        {
//            if (l[i] < l[i+1]) {
//                sum -= l[i];
//                flag = true;
//            }
//        }
//    }
//    cout<<sum<<endl;
//    return 0;
//}

#include "stdio.h"
short x,y;
int p,sum=0;
int main()
{
    scanf("%d",&p);
    bool flag = true;
    for (int i=0;i<p;i++) {
        scanf("%hd",&x);
        if (i) {
            if (x<y&&flag) {
                sum+=y;
                flag=false;
            }
            else if (x>y && !flag)
            {
                sum-=y;
                flag=true;
            }
        }
        y=x;
    }
    if (p==1||flag) {
        sum+=x;
    }
    printf("%d\n",sum);
    return 0;
}



//#include "stdio.h"
//short x,y=0;
//int p,i,sum=0;
//int main()
//{
//    scanf("%d",&p);
//    bool flag = true;
//    while (p--) {
//        scanf("%hd",&x);
//        if (x<y&&flag) {
//            sum+=y;
//            flag=false;
//        }
//        else if (x>y&&!flag)
//        {
//            sum-=y;
//            flag=true;
//        }
//        y=x;
//    }
//    if (!sum||flag) {
//        sum+=x;
//    }
//    printf("%d\n",sum);
//    return 0;
//}



