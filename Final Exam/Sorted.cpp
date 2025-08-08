#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        list<int> l;
        for(int i = 1;i<=n;i++){
            int val;
            cin>>val;
            l.push_back(val);
        }
        l.sort();
        l.unique();

        for(int val : l){
            cout<<val<<" ";
        }

        cout<<endl;
    }
    return 0;
}