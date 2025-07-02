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

void delete_head(Node* &head){
    Node* deletenode = head;
    head = deletenode->next;
    delete deletenode;
}

void print(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
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

    delete_head(head);
    print(head);
    return 0;
}