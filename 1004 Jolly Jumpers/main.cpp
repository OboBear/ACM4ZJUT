//#include "iostream"
//#include "fstream"
//#include "iomanip"
//using namespace std;

#include "stdio.h"
short i,t,n;
int x,y;
bool result[3005];
int main()
{
    while (scanf("%hd",&n) != EOF) {
        for (i=0; i<n; i++) {
            result[i]=false;
        }
        bool flag = true;
        for (i=0; i<n; i++) {
            scanf("%d",&x);
            if (flag) {
                if (i) {
                    t = x - y;
                    if (t<0) {
                        t=-t;
                    }
                    if (t && t<n && !result[t]) {
                        result[t] = true;
                    }
                    else
                    {
                        flag = false;
                    }
                }
                y = x;
            }
        }
        
        if (flag) {
            printf("Jolly\n");
        }
        else
            printf("Not jolly\n");
    }
}


//#include "stdio.h"
//short i,t,n;int x,y,result[99],z;int main(){while(scanf("%hd",&n)!=EOF){y=n/32+1;for(i=0;i<y;i++){result[i]=0;}z=true;for(i=0;i<n;i++){scanf("%d",&x);if(z){if(i){t=x-y;if(t<0){t=-t;}y=t/32;if(t&&t<n&&!((result[y]>>(t%32))&1)){result[y] |= (1<<(t%32));}else{z = false;}}y=x;}}if(z){printf("Jolly\n");}else printf("Not jolly\n");}}





