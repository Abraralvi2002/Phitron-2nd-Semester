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

void dup_cleaner(Node* head){
    for(Node* i = head; i != NULL; i = i->next){
        Node* tmp = i;
        for(Node* j = i->next; j != NULL;){
            if(i->val == j->val){
                Node* deletenode = j;
                tmp->next = j->next;
                j = j->next;
                delete deletenode;
            }else{
                tmp = j;
                j = j->next;
            }
        }
    }
}

void print_list(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
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

    dup_cleaner(head);
    print_list(head);

    return 0;
}