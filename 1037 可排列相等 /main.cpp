#include "iostream"
#include "fstream"
#include "vector"
#include "cmath"
#include "algorithm"
#include "cstdio"
#include "string"
#include "sstream"
using namespace std;

char *map1;
char *map2;

int main()
{
//    string temp1;
//    string temp2;
    int length = 0,length2 = 0;
     map1 = (char*)malloc(1000);
    map2 = (char*)malloc(1000);
    while ( NULL != gets(map1) ) {
        
        bool flag = true;
        length = strlen(map1);
        
        for (int i=0; i<length; i++) {
            if (map1[i]!=' ') {
                flag = false;
                break;
            }
        }
        if (flag) {
            continue;
        }
        
        gets(map2);
        length2 = strlen(map2);

        if (length2!= length) {
            cout<<"no\n";
            continue;
        }
        
        flag = true;
        
        sort(map1,map1+length);
        sort(map2,map2+length);
        
        for (int i=0; i<length; i++) {
            if (map1[i]!=map2[i]) {
                flag = false;
                break;
            }
        }
        
        if (flag) {
            cout<<"yes\n";
        }
        else cout<<"no\n";
        
        
    }
    return 0;
}



