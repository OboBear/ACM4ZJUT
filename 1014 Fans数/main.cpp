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
    string inputString;
    while (cin>>inputString) {
        long long sum = 0;
        for (int i=0; i<inputString.length(); i++) {
            sum+= inputString[i]-'0';
        }
        cout<<sum<<endl;
    }
    return 0;
}