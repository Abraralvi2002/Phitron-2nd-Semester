#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x,y;
    cin>>x>>y;
    long long int sum,mul,sub;
    sum = x + y;
    sub = x - y;
    mul = x * y;
    cout<<x<<" + "<<y<<" = "<<sum<<endl;
    cout<<x<<" * "<<y<<" = "<<mul<<endl;
    cout<<x<<" - "<<y<<" = "<<sub<<endl;
    return 0;
}