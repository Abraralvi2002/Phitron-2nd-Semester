#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        string s;
        cin>>s;
        stack<char> st;
        for(char x : s){
                if(!st.empty() && st.top() == '0' && x == '1'){
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