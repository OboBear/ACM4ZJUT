#include "iostream"
#include "fstream"
#include "vector"
#include "cmath"
#include "algorithm"
#include "string"
#include <map>
using namespace std;
int main()
{
    //         freopen("in","r",stdin);
    //         freopen("out","w",stdout);
    int n;
    string inputString;
    cin>>n;
    while (n--) {
        cin>>inputString;
        map<char,int>stringMap;
        for (int i=0; i<inputString.length(); i++) {
            stringMap[inputString[i]]++;
        }
        map<char,int>::iterator it = stringMap.begin();
        char position = 0;
        bool flag = true;
        while (it!=stringMap.end()) {
            if (it->second%2) {
                if (position) {
                    flag = false;
                    break;
                }
                position = it->first;
            }
            it++;
        }
        
        if (!flag) {
            cout<<"Sorry\n";
        }
        else
        {
            if (position) {
                inputString[inputString.length()/2]=position;
            }
            it = stringMap.begin();
            int currentPosition=0;
            
            while (it!=stringMap.end()) {
                int length=it->second/2;
                while (length--) {
                    inputString[currentPosition++]=it->first;
                }
                it++;
            }
            for (int i=0; i<inputString.length()/2; i++) {
                inputString[inputString.length()-i-1]=inputString[i];
            }
            
            cout<<inputString<<endl;
        }
    }
    return 0;
}





