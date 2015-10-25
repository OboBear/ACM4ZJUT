#include "iostream"
#include "fstream"
#include "vector"
#include "cmath"
#include "algorithm"
#include "cstdio"
using namespace std;


bool com(string a,string b)
{
    return a.length()<b.length();
}

int main()
{
    string inputString;
    vector<string>sarray;
    while (getline(cin,inputString)) {
        bool flag = true;
        for (int i=0; i<inputString.length()/2; i++) {
            if (inputString[i]!= inputString[inputString.length()-i-1]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            sarray.push_back(inputString);
        }
    }
    
    sort(sarray.begin(),sarray.end(),com);
    
    
    for (int i=0; i<sarray.size(); i++) {
        cout<<sarray[i]<<endl;
    }
    
    return 0;
}