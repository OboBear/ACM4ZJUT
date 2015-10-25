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
        if (inputString == "END") {
            break;
        }
        for (int i=0; i<inputString.length(); i++) {
            
            switch (inputString[i]) {
                case 'A':
                case 'W':
                case 'F':
                    inputString[i] = 'I';
                    break;
                case 'D':
                case 'P':
                case 'G':
                case 'B':
                    inputString[i] = 'e';
                    break;
                case 'C':
                    inputString[i] = 'L';
                    break;
                case 'M':
                    inputString[i] = 'o';
                    break;
                case 'S':
                    inputString[i] = 'v';
                    break;
                case 'L':
                    inputString[i] = 'Y';
                    break;
                case 'X':
                    inputString[i] = 'u';
                    break;
                default:
                    break;
            }
        }
        
        cout<<inputString<<endl;
    }
    
    return 0;
}