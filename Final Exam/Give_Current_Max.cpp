#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll;
        int marks;
        Student(string name, int roll, int marks){
            this->name = name;
            this->roll = roll;
            this->marks = marks;
        }

};

class cmp{
    public:
        bool operator()(Student last, Student first){
            if(last.marks < first.marks){
                return true;
            }else if(last.marks > first.marks){
                return false;
            }else{
                return last.roll > first.roll;
            }
        }
};

void insertion(priority_queue<Student,vector<Student>,cmp> &pq, int n){
    for(int i = 0;i<n;i++){
        string name;
        int roll;
        int marks;
        cin>>name>>roll>>marks;
        Student obj(name,roll,marks);
        pq.push(obj);
    }
}

int main(){
    
    priority_queue<Student, vector<Student>,cmp> pq;
    int n;
    cin>>n;
    insertion(pq,n);

    int q;
    cin>>q;
    while(q--){
        int val;
        cin>>val;
        if(val == 0){
            insertion(pq,1);
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }else if(val == 1){
            if(!pq.empty())
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            else
                cout<<"Empty"<<endl;
        }else if(val == 2){
            if(!pq.empty())
                pq.pop();
            if(!pq.empty())
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            else
                cout<<"Empty"<<endl;
        }
    }

    return 0;
}