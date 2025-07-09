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

void print_list(Node* head){

    Node* tmp = head;

    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

void insertion_head(Node* &head, int val){

    Node* newnode = new Node(val);
    
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
    
}

int main(){
    
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    insertion_head(head,40);
    insertion_head(head,50);
    print_list(head);

    return 0;
}