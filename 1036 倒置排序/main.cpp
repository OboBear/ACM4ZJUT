


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
    string origin;
    string reverseOri;
    int value;
};

bool com(Point a,Point b)
{
    return a.value<b.value;
}


int main()
{
    string temp;
    int n,m;
    
    cin>>n;
    while (n--) {
        vector<Point>vv;
        cin>>m;
        while (m--) {
            stringstream sin;
            Point point;
            cin>>point.origin;
            point.reverseOri = point.origin;
            reverse(point.reverseOri.begin(),point.reverseOri.end());
            sin<<point.reverseOri;
            sin>>point.value;
//            cout<<point.value<<endl;
            vv.push_back(point);
        }
        
        sort(vv.begin(),vv.end(),com);
        
        for (int i=0; i<vv.size(); i++) {
            if (i) {
                cout<<" ";
            }
            cout<<vv[i].origin;
        }
        cout<<endl;
        
    }
    return 0;
}



