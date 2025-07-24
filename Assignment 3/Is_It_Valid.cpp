#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        stack<char> st;
        string s;
        cin>>s;
        for(char x : s){
            if(!st.empty() && st.top() != x){
                st.pop();
            }else{
                st.push(x);
            }
        }
        if(!st.empty()){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}