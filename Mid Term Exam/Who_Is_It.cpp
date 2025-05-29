#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int id;
    char name[101];
    char sec;
    int marks;
};
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
    Student a,b,c;
    cin>>a.id>>a.name>>a.sec>>a.marks;
    cin>>b.id>>b.name>>b.sec>>b.marks;
    cin>>c.id>>c.name>>c.sec>>c.marks;
    int mmarks = max({a.marks,b.marks,c.marks});
    if(a.marks==mmarks){
        cout<<a.id<<" "<<a.name<<" "<<a.sec<<" "<<a.marks<<endl;
    }else if(b.marks==mmarks){
        cout<<b.id<<" "<<b.name<<" "<<b.sec<<" "<<b.marks<<endl;
    }else if(c.marks==mmarks){
        cout<<c.id<<" "<<c.name<<" "<<c.sec<<" "<<c.marks<<endl;
    }
    }

    return 0;
}