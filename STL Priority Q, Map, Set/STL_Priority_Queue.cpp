#include<bits/stdc++.h>
using namespace std;
void show_priority_q_max(priority_queue<int> pq, int n){
    while(n--){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}

void show_priority_q_min(priority_queue<int, vector<int>, greater<int>> mipq, int n2){
    while(n2--){
        cout<<mipq.top()<<" ";
        mipq.pop();
    }
    cout<<endl;
}

int main(){
    //For maximum priority queue
    priority_queue<int> mpq;

    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        int val;
        cin>>val;
        mpq.push(val);
    }
    show_priority_q_max(mpq,n);

    //For minimum priority queue
    priority_queue<int, vector<int>, greater<int>> mipq;

    int n2;
    cin>>n2;
    for(int i = 1;i<=n2;i++){
        int val;
        cin>>val;
        mipq.push(val);
    }
    show_priority_q_min(mipq,n2);

    return 0;
}