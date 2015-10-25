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
    cin>>n;
    while (n--) {
        cin>>m;
        vector<int>v;
        while (m--) {
            int tem;
            cin>>tem;
            v.push_back(tem);
            
        }
        //该题错误，等差数列不能少于三位的
        if(v.size()<3)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            sort(v.begin(),v.end());
            int dis = v[1] - v[0];
            bool flag = true;
            for (int i=2; i<v.size(); i++) {
                if (v[i] - v[i-1] != dis) {
                    flag = false;
                    break;
                }
            }
            
            if (flag) {
                cout<<"yes"<<endl;
            }
            else
                cout<<"no"<<endl;
        }
    }
    return 0;
}