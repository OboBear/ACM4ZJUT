#include "iostream"
#include "fstream"
#include "vector"
#include "cmath"
#include "algorithm"
#include "cstdio"
using namespace std;
int n,m,temp,copyN,copyM;
bool com(string a,string b)
{
    return a.length()<b.length();
}
int main()
{
    while(scanf("%d",&n)!=EOF&&n)
    {
        vector<string>v;
        string t;
        while (n--) {
            cin>>t;
            v.push_back(t);
        }
        
        sort(v.begin(),v.end(),com);
        for (int i=0; i<v.size(); i++) {
            cout<<v[i]<<endl;
        }
        cout<<endl;
    }
    
    return 0;
}