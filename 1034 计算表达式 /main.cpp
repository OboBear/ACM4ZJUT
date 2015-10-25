


#include "iostream"
#include "fstream"
#include "vector"
#include "cmath"
#include "algorithm"
#include "cstdio"
#include "string"
#include "sstream"
using namespace std;
vector<char>sigVec;
vector<int>numberVec;

int main()
{
    string s;
    while (cin>>s) {
        sigVec.clear();
        numberVec.clear();
        stringstream sin ;
        sin<<s;
        int numberTem;
        char sigTem;
        sin>>numberTem;
//        cout<<s<<endl;
        numberVec.push_back(numberTem);
        while (sin>>sigTem>>numberTem) {
            sigVec.push_back(sigTem);
            numberVec.push_back(numberTem);
//            cout<<numberTem<<endl;
        }
        
//        for (int i=0; i<sigVec.size(); i++) {
//            cout<<sigVec[i]<<" ";
//        }
//        cout<<endl;
//        for (int i=0; i<numberVec.size(); i++) {
//            cout<<numberVec[i]<<" ";
//        }
//        cout<<endl;
        
        
        for (int i=0; i<sigVec.size(); i++) {
            
            switch (sigVec[i]) {
                case '*':
                    numberVec[i]=numberVec[i]*numberVec[i+1];
                    numberVec.erase(numberVec.begin()+i+1);
                    sigVec.erase(sigVec.begin()+i);
                    i--;
                    break;
                case '/':
                    numberVec[i]=numberVec[i]/numberVec[i+1];
                    numberVec.erase(numberVec.begin()+i+1);
                    sigVec.erase(sigVec.begin()+i);
                    i--;
                    break;
                default:
                    break;
            }
        }
        
        
//        for (int i=0; i<sigVec.size(); i++) {
//            cout<<sigVec[i]<<" ";
//        }
//        cout<<endl;
//        for (int i=0; i<numberVec.size(); i++) {
//            cout<<numberVec[i]<<" ";
//        }
//        cout<<endl;
        
        
        for (int i=0; i<sigVec.size(); i++) {
            switch (sigVec[i]) {
                case '+':
                    numberVec[0]+=numberVec[i+1];
//                    numberVec.erase(numberVec.begin()+i+1);
//                    sigVec.erase(sigVec.begin()+i);
//                    i--;
                    break;
                case '-':
                    numberVec[0]-=numberVec[i+1];
//                    numberVec.erase(numberVec.begin()+i+1);
//                    sigVec.erase(sigVec.begin()+i);
//                    i--;
                    break;
                default:
                    break;
            }
            
        }
        
        cout<<numberVec[0]<<endl;
        
        
    }
    
    return 0;
}



