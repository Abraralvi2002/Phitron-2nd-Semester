#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n,m;
        cin>>n>>m;
        if(n<=m){
            cout<<"0"<<endl;
        }else{
            cout<<n-m<<endl;
        }
    }
    return 0;
}