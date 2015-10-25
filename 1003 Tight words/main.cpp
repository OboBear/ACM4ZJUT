#include "stdio.h"
float map[2][10];
unsigned short i,j,itemp1,itemp2;
int main()
{
    int k,n;
    while (scanf("%d%d",&k,&n) != EOF) {
        if (k <= 1 || n == 1) {
            printf("100.00000\n");
        }
        else
        {

            float rate = 100.0/(k+1);
            //第0个位置放置各个元素的概率
            for (j = 0 ; j <= k;j++) {
                map[0][j] = rate;
            }
            //第i个位置
            for (i = 1; i < n; i++) {
                itemp1 = i%2;
                itemp2 = (i+1)%2;
                //放置j元素是twight word的概率
                for (j = 0; j <= k; j++) {
                    if (j==0) {
                        map[itemp1][j] = ( map[itemp2][j] + map[itemp2][j+1])/(k+1);
                    }
                    else if (j == k)
                    {
                        map[itemp1][j] = ( map[itemp2][j] + map[itemp2][j-1])/(k+1);
                    }
                    else
                    {
                        map[itemp1][j] = ( map[itemp2][j-1] + map[itemp2][j] + map[itemp2][j+1])/(k+1);
                    }
                }
            }
            
            rate = 0;
            
            for (j = 0; j <= k ; j++) {
                rate += map[itemp1][j];
            }
            
            printf("%.5lf\n",rate);
        }
    }
    return 0;
}


//#include "stdio.h"
//float m[2][11],r;int i,j,k,n;int main(){while(scanf("%d%d",&k,&n)!= EOF){if(k<=1||n==1){printf("100.00000\n");}else{r=100.0/(k++ +1);for(j=0;j<k;j++){m[1][j]=r;}m[1][k]=m[0][k]=0;for(i=2;i<=n;i++){for(j=0;j<k;j++){m[i%2][j]=m[(i+1)%2][j]+m[(i+1)%2][j+1];if(j)m[i%2][j]+=m[(i+1)%2][j-1];m[i%2][j]/=k;}}for(r=j=0;j<k;j++){r+=m[n%2][j];}printf("%.5lf\n",r);}}return 0;}


