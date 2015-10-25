#include "iostream"
#include "fstream"
#include "string"
using namespace std;

int main()
{
//     freopen("in","r",stdin);
//     freopen("out","w",stdout);
    
    string inputString;
    while (getline(cin,inputString)) {
        for (int i=0; i<inputString.length();i++ ) {
            if(inputString[i] == '1')
                inputString[i] = '0';
            else
                inputString[i] = '1';
        }
        
        cout<<inputString<<endl;
    }
    
    return 0;
}
