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

void sort_link_list(Node* head){
    for(Node* i = head;i->next != NULL;i = i->next){
        for(Node* j = i->next;j != NULL;j = j->next){
            if(i->val > j->val){
                swap(i->val,j->val);
            }
        }
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

    sort_link_list(head);
    cout<<tail->val<<endl;
    return 0;
}