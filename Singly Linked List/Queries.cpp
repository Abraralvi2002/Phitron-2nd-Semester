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

void delete_head(Node* &head,Node* &tail){
    Node* deletenode = head;
    head = deletenode->next;
    if(head == NULL){
        tail = NULL;
    }
    delete deletenode;
}

void delete_any_pos(Node* &head,Node* &tail, int idx){
    Node* tmp = head;
    for(int i = 0;i<idx-1;i++){
        tmp = tmp->next;
    }
    Node* deletenode = tmp->next;
    tmp->next = deletenode->next;
    if(deletenode->next == NULL){
        tail = tmp;
    }
    delete deletenode;
}

void print_list(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

int size_cal(Node* head){
    Node* tmp = head;
    int count = 0;
    while(tmp != NULL){
        tmp = tmp->next;
        count++;
    }

    return count;
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;
    int q;
    cin>>q;
    for(int i = 1;i<=q;i++){
        int x,val;
        cin>>x>>val;

        if(x == 0){
            insertion_head(head,tail,val);
            print_list(head);
        }
        if(x == 1){
            insertion_tail(head,tail,val);
            print_list(head);
        }
        if(x == 2){
            int sz = size_cal(head);
            if(val >= sz){
            print_list(head);     
            }else if(val == 0){
                delete_head(head,tail);
                print_list(head);              
            }else{
                delete_any_pos(head,tail,val);
                print_list(head);
            }
        }
    }

    return 0;
}