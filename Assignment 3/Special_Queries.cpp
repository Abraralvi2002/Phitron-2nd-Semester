#include<bits/stdc++.h>
using namespace std;
int main(){
    int Q;
    cin>>Q;
    queue<string> q;
    for(int i = 1;i<=Q;i++){
        int c;
        string name;
        cin>>c;
        if(c == 0){
            cin>>name;
            q.push(name);
        }else if(c == 1){
            if(!q.empty()){
                cout<<q.front()<<endl;
                q.pop();
            }else{
                cout<<"Invalid"<<endl;
            }
        }
    }
    return 0;
}