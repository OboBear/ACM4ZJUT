#include "iostream"
#include "fstream"
#include "vector"
#include "cmath"
#include "algorithm"
#include "cstdio"
#include "string"
#include "sstream"
using namespace std;

int main()
{
    string s;
    while (getline(cin,s)&&s!="000000") {
        bool flag = true;

        for (int i=0; i<s.length(); i++) {
            if (s[i]>='A'&&s[i]<='Z') {
                s[i] -= 'A'-'a';
            }
        }
        for (int i=0; i<s.length()/2; i++) {
            
            switch (s[i]) {
                case '{':
                    s[i]='}';
                    break;
                case '(':
                    s[i]=')';
                    break;
                case '[':
                    s[i]=']';
                    break;
                case '<':
                    s[i]='>';
                    break;
                    
                    
                case '>':
                    s[i]='<';
//                    break;
                case '}':
                    s[i]='{';
                case ']':
                    s[i]='[';
//                    break;
                case ')':
                    s[i]='(';
//                    break;
                    flag = false;
                default:
                    break;
            }
        }
//        cout<<s<<endl;
       
        for (int i=0; i<s.length()/2; i++) {
            if (s[i]!=s[s.length()-i-1]) {
                flag = false;
                break;
            }
        }
        
        if (flag) {
            cout<<"Symmetry\n";
        }
        else
        {
            cout<<"Not symmetry\n";
        }
        
    }
    return 0;
}



