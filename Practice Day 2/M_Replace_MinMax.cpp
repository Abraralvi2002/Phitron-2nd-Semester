#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0;i<n;i++){
        cin>>ar[i];
    }
    int mi = ar[0];
    for(int i = 0;i<n;i++){
        mi = min(mi,ar[i]);
    }
    int ma = ar[0];
    for(int i = 0;i<n;i++){
        ma = max(ma,ar[i]);
    }
    int i1,i2;
    for(int i = 0;i<n;i++){
        if(ar[i]==mi){
            i1 = i;
        }
        if(ar[i]==ma){
            i2 = i;
        }
    }
    swap(ar[i1],ar[i2]);
    for(int i = 0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}