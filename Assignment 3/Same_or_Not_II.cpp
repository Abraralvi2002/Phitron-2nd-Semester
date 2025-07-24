#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertion_tail(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void deletion_head(Node* &head,Node* &tail){
    Node* deletenode = head;
    head = head->next;
    delete deletenode;
    if(head == NULL){
        tail = NULL;
        return;
    }
    head->prev = NULL;
}

void deletion_tail(Node* &head,Node* &tail){
    Node* deltenode = tail;
    tail = tail->prev;
    delete deltenode;
    if(tail == NULL){
        head = NULL;
        return;
    }
    tail->next = NULL;
}

class Queue{
    public:
        Node* qhead = NULL;
        Node* qtail = NULL;
        void push(int qval){
            insertion_tail(qhead,qtail,qval);
        }
        int front(){
            return qhead->val;
        }
        void pop(){
            deletion_head(qhead,qtail);
        }
};

class Stack{
    public:
        Node* shead = NULL;
        Node* stail = NULL;
        void push(int sval){
            insertion_tail(shead,stail,sval);
        }
        int top(){
            return stail->val;
        }
        void pop(){
            deletion_tail(shead,stail);
        }
};

int main(){
    Stack st;
    Queue q;
    Queue q2;
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
    Node* tmp = q.qhead;
    Node* tmp2 = q2.qhead;
    while(tmp != NULL && tmp2 != NULL){
        if(tmp->val != tmp2->val){
            cout<<"NO";
            return 0;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    cout<<"YES";
    return 0;
}