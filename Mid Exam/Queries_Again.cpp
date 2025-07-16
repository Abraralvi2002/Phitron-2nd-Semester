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

void print_left_to_right(Node* head){

    Node* tmp = head;
    cout<<"L -> ";
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

void print_right_to_left(Node* tail){

    Node* tmp = tail;
    cout<<"R -> ";
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}

void insertion(Node* &head,Node* &tail,int pos,int val,int &sz){

    if(pos < 0 || pos > sz){
        cout<<"Invalid"<<endl;
        return;
    }
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
    }else if(pos == 0){
        head->prev = newnode;
        newnode->next = head;
        head = newnode;
    }else if(pos == sz){
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }else{
        Node* tmp = head;
        for(int i = 0;i<pos-1;i++){
            tmp = tmp->next;
        }
        newnode->prev = tmp;
        newnode->next = tmp->next;
        tmp->next->prev = newnode;
        tmp->next = newnode;
    }

    sz++;
    
    print_left_to_right(head);
    print_right_to_left(tail);
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    int sz = 0;
    int q,x,val;

    cin>>q;
    for(int i = 1;i<=q;i++){

        cin>>x>>val;

        insertion(head,tail,x,val,sz);
    }
    return 0;
}