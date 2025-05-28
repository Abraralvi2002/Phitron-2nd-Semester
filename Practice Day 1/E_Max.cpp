#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0;i<n;i++){
        cin>>ar[i];
    }
    int maax = ar[0];
    for(int i = 0;i<n;i++){
        maax = max(maax,ar[i]);
    }
    cout<<maax;
    return 0;
}