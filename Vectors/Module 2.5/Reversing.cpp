#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i = 0;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    reverse(v.begin(),v.end());
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}