#include "iostream"
#include "fstream"
#include "vector"
#include "cmath"
#include "algorithm"
#include "cstdio"
#include "string"
#include "sstream"
using namespace std;
struct Point
{
    int input ;
    long long value;
};

bool com(Point a,Point b)
{
    return a.value<b.value;
}
int main()
{
    int n;
    while (cin>>n&&n) {
        vector<Point>pp;
        for (int i=0; i<n; i++) {
            Point p;
            cin>>p.input;
            int tem = p.input;
            p.value =0;
            while (tem) {
                p.value += (tem%10)*(tem%10);
                tem/=10;
            }
            pp.push_back(p);
        }
        
        sort(pp.begin(),pp.end(),com);
        
        for (int i=0; i<pp.size(); i++) {
            if(i)cout<<" ";
            cout<<pp[i].input;
        }
        cout<<endl;
    }
    return 0;
}



