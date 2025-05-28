#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    int count = 0;
    for(int i = 0;i<n;i++){
        if(ar[0]==ar[i]){
            count++;
        }
    }
    if(count%2==0){
        cout<<"Unlucky";
    }else{
        cout<<"Lucky";
    }
    return 0;
}