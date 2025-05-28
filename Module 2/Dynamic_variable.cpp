#include<bits/stdc++.h>
using namespace std;
int *p,*q;
void sum(){
    int *a = new int;
    int *b = new int;
    cin>>*a>>*b;
    p = a;
    q = b;
}
int main(){
    cout<<"Enter Two Integer"<<endl;
    sum();
    cout<<*p+*q<<endl;
    return 0;
}