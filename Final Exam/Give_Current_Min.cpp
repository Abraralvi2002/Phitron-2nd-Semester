#include<bits/stdc++.h>
using namespace std;

void insertion(priority_queue<int, vector<int>, greater<int>> &pq, int n){
    while(n--){
        int val;
        cin>>val;
        pq.push(val);
    }
}

int main(){
    
    priority_queue<int, vector<int>, greater<int>> pq;
    int n;
    cin>>n;

    insertion(pq,n);

    int q;
    cin>>q;

    while(q--){
        int val;
        cin>>val;
        if(val == 0){
            insertion(pq,1);
            cout<<pq.top()<<endl;
        }else if(val == 1){
            if(!pq.empty())
                cout<<pq.top()<<endl;
            else
                cout<<"Empty"<<endl;
        }else if(val == 2){
            if(!pq.empty())
                pq.pop();
            if(!pq.empty())
                cout<<pq.top()<<endl;
            else
                cout<<"Empty"<<endl;
        }
    }

    return 0;
}