#include "iostream"
#include "fstream"
#include "string"
using namespace std;

int main()
{
//     freopen("in","r",stdin);
//     freopen("out","w",stdout);
    
    string n;
    int m;
    while (cin>>n>>m) {
//        cout<<n<<"   "<<m<<endl;
        
        switch (m) {
            case 1:
                cout<<0<<endl;
                break;
            case 2:
            case 5:
                cout<<((n[n.length()-1]-'0')%m) <<endl;
                break;
                
            case 4:
            case 8:
            {
                int lastThreeInt = (n[n.length()-1]-'0');
                
                if (n.length() >= 2) {
                    lastThreeInt += (n[n.length()-2]-'0') *10;
                }
                if (n.length() >= 3) {
                    lastThreeInt += (n[n.length()-3]-'0') *100;
                }
                
                cout<<lastThreeInt % m<<endl;
            }
                break;
                
            case 6:
            {
                int sum = 0;
                for (int i=0; i<n.length() - 1; i++) {
                    sum += n[i]-'0';
                }
                sum*=4;
                
                sum += (n[n.length()-1]-'0');
                
                cout<<sum%m<<endl;
            }
                break;
                
            case 7:
            {
                int map[6] = {1,3,2,6,4,5};
                int sum = 0;
                
                for (int i = 0; i< n.length(); i++) {
                    sum += (n[i]-'0')*map[ (n.length() - i - 1 ) % 6];
                }
                cout<<sum%m<<endl;
            }
                break;
                
            case 3:
            case 9:
            {
                int sum = 0;
                for (int i=0; i<n.length(); i++) {
                    sum += n[i]-'0';
                }
                cout<<sum%m<<endl;
            }
                break;
                
            default:
                break;
        }
        
        
        
    }
    
    
    return 0;
}



////

/*


10/1       都是0
10/2 110/2 看后一位，奇数偶数
10/3 110/3 用那个方法
10/4 110/4 看后2位
10/5 110/5 看后1位
10/6=4 110/6=2 120/6=0 n/6  6:0 16:4 26:2 36:0 46:4 56:2 66:0
                            6:0 106:4 206:2 306:0 406:4 
                            个位 + wei%3 {0,4,2}累加
4
 
10/7 110/7 n/7
 
 3 2 6 4 5 1
 
10/8 110/8 看后3位
10/9 110/9 用那个方法
 
 



*/
////