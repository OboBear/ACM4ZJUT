#include "iostream"
#include "fstream"
#include "vector"
#include "cmath"
#include "algorithm"
#include "cstdio"
using namespace std;
short p,k,i,j,z,a[52];
int main()
{
    while(cin>>p>>k)
    {
        for (i=0; i < p-1; i++) {
            a[i]=i+1;
        }
        a[p-1]=0;
        
        j = (p + 1)/2;
        i = 0;
        while(j--)
        {
            z = k;
            while (z--) {
                if (z==0) {
                    a[i] = a[a[i]];
                    a[a[i]] = -1;
                }
                else
                {
                    i = a[i];
                }
            }
        }
        
        for (i=0; i<p; i++) {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}