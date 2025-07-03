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

void serch_val(Node* head, int x){
    int count = 0, flag = 0;
    for(Node* i = head;i != NULL;i = i->next){
        if(i->val == x){
            cout<<count<<endl;
            flag = 1;
            break;
        }
        count++;
    }
    if(flag == 0){
        cout<<"-1"<<endl;
    }
}

int main(){
    
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
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
        int X;
        cin>>X;
        serch_val(head,X);
    }

    return 0;
}