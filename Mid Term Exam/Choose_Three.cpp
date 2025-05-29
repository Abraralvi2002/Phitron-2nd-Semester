#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
    int n,s,flag=0;
    cin>>n>>s;
    int ar[n];
    for(int i = 0;i<n;i++){
        cin>>ar[i];
    }
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            for(int k = j+1;k<n;k++){
                if(ar[i]+ar[j]+ar[k]==s){
                    flag = 1;
                    break;
                }
            }
            if(flag==1){
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    }
    return 0;
}