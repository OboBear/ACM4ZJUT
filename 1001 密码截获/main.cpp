//#include "iostream"
//#include "fstream"
//#include "vector"
//#include "cmath"
//#include "algorithm"
//using namespace std;
//
//int main()
//{
//    //     freopen("in","r",stdin);
//    //     freopen("out","w",stdout);
//    string inputString;
//    int maxLength = 1;
//    
//    while (cin>>inputString) {
//        
//        maxLength = 1;
//
//        for (int i=0; i<inputString.length(); i++) {
//            for (int j=inputString.length()-1; j >= i; j--) {
//                
//                if (inputString[i] == inputString[j]) {
//                    int tempI = i,tempJ=j;
//                    while (tempI < tempJ && inputString[tempI++] == inputString[tempJ--]) {
//                        ;
//                    }
//                    
//                    if (tempI >= tempJ) {
//                        if (maxLength < j - i + 1) {
//                            maxLength = j - i + 1;
//                        }
//                    }
//                }
//            }
//        }
//        
//        cout<<maxLength<<endl;
//    }
//    return 0;
//}

#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

char str[10000]; //存储用户输入的字符
// IsSymmetry函数 判断指定字符串s是否对称，对称则返回1，不对称则返回0，参数n为字符串长度
int IsSymmetry(char* s,int n)
{
    int i,j;
    for(i = 0,j = n - 1;i < j;i++,j--)
    {
        if(s[i] != s[j])
            return 0;
    }
    return 1;
}
int main()
{
    int i,j;
    int max = 1;//存储最大长度，最小为1
    
    while(gets(str))//获取用户输入的字符
    {
        int len = strlen(str);
        max = 1;//最大长度初始化
        for(i = 0;i < len;i++)//遍历所有字符串
        {
            for(j = len - i;j >=2;j--)
            {
                if(IsSymmetry(str + i,j))//当前字符串是对称的
                {
                    if(j > max) //如果当前对称字符串的长度大于之前找到的最大长度，则更新max的值
                    {
                        max = j;
                    }
                    break;  //由于字符串长度是递减的，所有一旦找到指定字母开头的最长的字符串，
                    //则可返回
                }
            }
        }
        printf("%d\n",max);
    }
    return 0;
}