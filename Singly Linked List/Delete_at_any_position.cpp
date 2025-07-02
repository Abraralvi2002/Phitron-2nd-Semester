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

void delete_any_pos(Node* head, int idx){
    Node* tmp = head;
    for(int i = 1;i<idx-1;i++){
        tmp = tmp->next;
    }
    Node* deletenode = tmp->next;
    tmp->next = deletenode->next;
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
    int idx;
    while(1){
        cin>>val;
        if(val == -1){
            break;
        }
        insertion_tail(head,tail,val);
    }
    cin>>idx;

    delete_any_pos(head,idx);
    print(head);
    return 0;
}