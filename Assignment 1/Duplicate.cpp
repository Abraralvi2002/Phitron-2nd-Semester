#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i = 0,j=i+1;i<n;i++,j++){
        if(v[i]==v[j]){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}