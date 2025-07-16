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

void insertion_tail(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void palindrome_checker(Node* head,Node* chead){
    Node* tmp1 = head;
    Node* tmp2 = chead;
    while(tmp1 != NULL && tmp2 != NULL){
        if(tmp1->val != tmp2->val){
            cout<<"NO";
            return;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    cout<<"YES";
}

void reverse_list(Node* chead,Node* ctail){
    for(Node *i = chead,*j = ctail;i != j && i->prev != j;i = i->next,j = j->prev){
        swap(i->val,j->val);
    }

}

void copy_list(Node* head,Node* &ctail){
    Node* tmp = head->next;
    while(tmp != NULL){
        Node* newnode = new Node(tmp->val);
        ctail->next = newnode;
        newnode->prev = ctail;
        ctail = newnode;
        tmp = tmp->next;
    }
}
int main(){

    Node* head = NULL;
    Node* tail = NULL;

    int val;

    while(true){

        cin>>val;
        if(val == -1){
            break;
        }
        insertion_tail(head,tail,val);
    }
    Node* chead = new Node(head->val);
    Node* ctail = chead;

    copy_list(head,ctail);
    reverse_list(chead,ctail);
    palindrome_checker(head,chead);

    return 0;
}