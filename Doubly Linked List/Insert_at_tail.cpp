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

void insertion_tail(Node* &tail,int val){
    Node* newnode = new Node(val);
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

int main(){
    
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    insertion_tail(tail,40);
    insertion_tail(tail,50);
    print_list(head);

    return 0;
}