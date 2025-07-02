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

void print_reverse(Node* tmp){
    
    if(tmp == NULL){
        return;
    }
    print_reverse(tmp->next);
    cout<<tmp->val<<endl;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(1){
        cin>>val;
        if(val == -1){
            break;
        }
        insertion_tail(head,tail,val);
    }

    print_reverse(head);
    return 0;
}