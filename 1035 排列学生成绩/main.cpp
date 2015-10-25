


#include "iostream"
#include "fstream"
#include "vector"
#include "cmath"
#include "algorithm"
#include "cstdio"
#include "string"
#include "sstream"
using namespace std;
struct Student
{
    string name;
    vector<int>score;
    double average;
};

bool com(Student a,Student b)
{
    return a.average>b.average;
}


int main()
{
    string temp;
    vector<Student>result;
    while (getline(cin,temp) ) {
        
        stringstream sin;
//        cout<<temp<<endl;
        sin<<temp;
        Student s;
        sin>>s.name;
        int score;
        while (sin>>score) {
            s.score.push_back(score);
//            cout<<score<<"  ";
        }
//        cout<<endl;
        
        score =0;
        for (int i=0; i<s.score.size(); i++) {
            score+=s.score[i];
//            cout<<s.score[i]<<"  ";
        }
//        cout<<endl;
        s.average = score*1.0/s.score.size();
        
        if ((int)(s.average)>60) {
            result.push_back(s);
        }
    }
//    cout<<"size:"<<result.size()<<endl;
    sort(result.begin(),result.end(),com);
    
    for (int i=0; i<result.size(); i++) {
        cout<<i+1<<" "<<result[i].name<<endl;
    }
    
    return 0;
}



