#include "iostream"
#include "fstream"
#include "vector"
#include "cmath"
#include "algorithm"
using namespace std;

int main()
{
    //     freopen("in","r",stdin);
    //     freopen("out","w",stdout);
    int n,m;
    while(cin>>n>>m)
    {
        
        if (n > 2*m ) {
            m = n-m;
        }
        
        long long result = 1;
        
        for (int i=0; i<m; i++) {
            
            result *= (n - i);
            result /= (i+1);
        }
        
        cout<<result<<endl;
        
    }
    
    return 0;
}