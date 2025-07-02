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

void delete_tail(Node* head, int end, Node* &tail){
    Node* tmp = head;
    for(int i = 1;i<end-1;i++){
        tmp = tmp->next;
    }
    Node* deletenode = tmp->next;
    tmp->next = deletenode->next;
    delete deletenode;
    tail = tmp;
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
    int count = 0;
    while(1){
        cin>>val;
        if(val == -1){
            break;
        }
        insertion_tail(head,tail,val);
        count++;
    }
    
    delete_tail(head,count,tail);
    print(head);
    return 0;
}