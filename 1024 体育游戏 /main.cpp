//#include "iostream"
//#include "fstream"
//#include "vector"
//#include "cmath"
//#include "algorithm"
//#include "string"
//#include <map>
//using namespace std;
//struct Point
//{
//    unsigned short flag;
//    int x,y;
//};
//
//Point points[1005];
//
//bool com(Point a,Point b){
//    return a.flag<b.flag;
//}
//
//double getDis(double x,double y)
//{
//    return sqrt(x*x+y*y);
//}
//
//int main()
//{
//    //         freopen("in","r",stdin);
//    //         freopen("out","w",stdout);
//    int n,m;
//    scanf("%d",&n);
//    while (n--) {
////        cin>>m>>points[0].x>>points[0].y;
//        scanf("%hd%d%d",&(points[0].flag),&(points[0].x),&(points[0].y));
//        for (int i=1; i<=points[0].flag; i++) {
//            cin>>points[i].flag>>points[i].x>>points[i].y;
//        }
//        sort(points+1,points+points[0].flag+1,com);
//        double sum=0;
//        for (int i=1; i<=points[0].flag; i++) {
//            sum+=getDis(points[i].x-points[i-1].x,points[i].y-points[i-1].y);
//        }
//        printf("%.3f\n",sum);
//    }
//    return 0;
//}
//
//


#include "iostream"
#include "fstream"
#include "vector"
#include "cmath"
#include "algorithm"
#include "string"
#include <map>
using namespace std;
struct Point
{
    unsigned short flag;
    int x,y;
};

Point points[1005];
bool com(Point a,Point b){
    return a.flag<b.flag;
}

double getDis(double x,double y)
{
    return sqrt(x*x+y*y);
}

int main()
{
    //         freopen("in","r",stdin);
    //         freopen("out","w",stdout);
    int n,m;
    scanf("%d",&n);
    while (n--) {
        scanf("%hd%d%d",&(points[0].flag),&(points[0].x),&(points[0].y));
        for (int i=1; i<=points[0].flag; i++) {
            cin>>points[i].flag>>points[i].x>>points[i].y;
        }
        sort(points+1,points+points[0].flag+1,com);
        double sum=0;
        for (int i=1; i<=points[0].flag; i++) {
            sum+=getDis(points[i].x-points[i-1].x,points[i].y-points[i-1].y);
        }
        printf("%.3f\n",sum);
    }
    return 0;
}




