#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int cls;
    double gpa;

    Student(string name,int roll,int cls,double gpa){
        this->name = name;
        (*this).roll = roll;// either {(*this).sommething} or {this->something}
        (*this).cls = cls;
        this->gpa = gpa;
    }

};
int main(){
    Student a("Joshim",5,7,4.50);
    Student b("Hashem",3,7,4.98);

    cout<<a.name<<" "<<a.roll<<" "<<a.cls<<" "<<a.gpa<<endl;
    cout<<b.name<<" "<<b.roll<<" "<<b.cls<<" "<<b.gpa<<endl;
    return 0;
}