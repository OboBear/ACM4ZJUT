#include "iostream"
#include "fstream"
#include "vector"
#include "cmath"
#include "algorithm"
#include "string"
using namespace std;
int main()
{
//         freopen("in","r",stdin);
//         freopen("out","w",stdout);
    int n;
    string ss;
    cin>>n;
    while (n--) {
        cin>>ss;
        int max = -1e8;
        int sum=0;
        for (int i=0; i<ss.length(); i++) {
            ss[i]-='A'+13;
            sum+=ss[i];
            max=max>sum?max:sum;
            if (sum<0) {
                sum=0;
            }
        }
        cout<<max<<endl;
    }
    
    return 0;
}





