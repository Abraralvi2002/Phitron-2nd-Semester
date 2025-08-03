#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int flag = 0;
        int n;
        cin>>n;
        int ar[n];
        for(int i = 0;i<n;i++){
            cin>>ar[i];
        }
        for(int i = 0;i<n;i++){
            int sum = ar[i] + ar[i+1];
            if(sum%2 == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}