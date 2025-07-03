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

int main(){
    Node* head1 = NULL;
    Node* tail1 = NULL;

    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val1,count1 = 0;
    while(1){
        cin>>val1;
        if(val1 == -1){
            break;
        }
        insertion_tail(head1,tail1,val1);
        count1++;
    }

    int val2,count2 = 0;
    while(1){
        cin>>val2;
        if(val2 == -1){
            break;
        }
        insertion_tail(head2,tail2,val2);
        count2++;
    }

    Node* i = head1;
    Node* j = head2;
    if(count1 != count2){
        cout<<"NO";
        return 0;
    }else{
        while(i != NULL){

            if(i->val != j->val){
                cout<<"NO";
                return 0;
            }
            i = i->next;
            j = j->next;
        }
    }
    cout<<"YES";

    return 0;
}