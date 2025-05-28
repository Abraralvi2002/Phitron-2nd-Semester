#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int cls;
    double gpa;

    Student(string n,int r,int c,double g){
        name = n;
        roll = r;
        cls = c;
        gpa = g;
    }

};
int main(){
    Student a("Rahim",45,5,2.50);
    Student b("Karim",1,5,5.00);

    cout<<a.name<<" "<<a.roll<<" "<<a.cls<<" "<<a.gpa<<endl;
    cout<<b.name<<" "<<b.roll<<" "<<b.cls<<" "<<b.gpa<<endl;
    return 0;
}