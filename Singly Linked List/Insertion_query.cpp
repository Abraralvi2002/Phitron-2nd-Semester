#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insertion_tail(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void insertion_any_pos(Node* &head,Node* &tail,int idx,int val){
    Node* newnode = new Node(val);
    Node* tmp = head;
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    for(int i = 0;i<idx-1;i++){
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}

void insertion_head(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void print_list(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    int count = 0;
    while(1){
        cin>>val;
        if(val == -1){
            break;
        }
        insertion_tail(head,tail,val);
        count++;
    }

    int q;
    cin>>q;
    for(int i = 1;i<=q;i++){
        int idx,val;
        cin>>idx>>val;
        if(idx==0){
            insertion_head(head,tail,val);
            count++;
            print_list(head);
        }else if(idx<=count){
            insertion_any_pos(head,tail,idx,val);
            count++;
            print_list(head);
        }else{
            cout<<"Invalid"<<endl;
        }
    }
    return 0;
}