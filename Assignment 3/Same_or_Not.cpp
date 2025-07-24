#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    queue<int> q,q2;
    int n,m;
    cin>>n>>m;
    if(n != m){
        cout<<"NO";
        return 0;
    }
    for(int i = 1;i<=n;i++){
        int val;
        cin>>val;
        st.push(val);
    }
    for(int i = 1;i<=m;i++){
        int val;
        cin>>val;
        q.push(val);
    }
    for(int i = 1;i<=m;i++){
        int val = st.top();
        st.pop();
        q2.push(val);
    }
    if(q != q2){
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
    return 0;
}