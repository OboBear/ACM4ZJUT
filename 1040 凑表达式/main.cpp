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
    double a,b,c,d;
    while (cin>>a>>b>>c && (a||b||c)) {
        bool result = !(a&&b&&c);
        if (result) {
            cout<<"yes\n";
        }
        else
        {
        result =
            a+b==c
            ||b+c==a
            ||c+a==b
            ||a*b==c
            ||b*c==a
            ||c*a==b;
//            ||a-b==c
//            ||b-a==c
//            ||a/b==c
//            ||b/a==c
//            ||c/a==b;
            if (result) {
                cout<<"yes\n";
            }
            else
                cout<<"no\n";
        }
        
    }
    return 0;
}



