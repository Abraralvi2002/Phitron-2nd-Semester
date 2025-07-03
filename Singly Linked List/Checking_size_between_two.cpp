#include<bits/stdc++.h>
using namespace std;
int count1 = 0, count2 = 0;
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

void print(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
}
int main(){
    
    for(int i = 1;i<=2;i++){
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
        if(i == 1){
            count1 = count;
        }else{
            count2 = count;
        }
        delete head;
        delete tail;
    }
    if(count1 == count2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}