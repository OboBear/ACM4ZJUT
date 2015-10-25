//#include "iostream"
//#include "fstream"
//#include "vector"
//#include "cmath"
//#include "algorithm"
//using namespace std;
////int map[1005][1005];
//
//int main()
//{
////         freopen("in","r",stdin);
////         freopen("out","w",stdout);
//    int n;
//    cin>>n;
//    while (n--) {
//        double R;
//        int I;
//        cin>>R>>I;
//        if (R>=0) {
//            
//            if (int(R+0.5)==I) {
//                cout<<"Correct\n";
//            }
//            else
//            {
//                cout<<"Not Correct\n";
//            }
//        }
//        else
//        {
////            cout<<int(R-0.5+1e-9)<<endl;
//            if (int(R-0.5+1e-9)==I) {
//                cout<<"Correct\n";
//            }
//            else
//            {
//                cout<<"Not Correct\n";
//            }
//        }
//    }
//    return 0;
//}



#include<stdio.h>
int n,I;
float R;
int main()
{
    scanf("%d",&n);
    while(n--){
        scanf("%f%d",&R,&I);
        R-=I;
        if (R<0.5&&R>=-0.5)
            puts("Correct");
        else
            puts("Not Correct");
    }
    return 0;
}


//#include<stdio.h>
//int n,I;float R;int main(){scanf("%d",&n);while(n--){scanf("%f%d",&R,&I);R-=I;if(R<0.5&&R>=-0.5)puts("Correct");else puts("Not Correct");}}

