//using selection sort in accending order
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

int max_finder(Node* head){
    
    int max = INT_MIN;
    for(Node* i = head;i != NULL;i = i->next){
        if(i->val > max){
            max = i->val;
        }
    }

    return max;
}

int min_finder(Node* head){

    int min = INT_MAX;
    for(Node* i = head;i != NULL;i = i->next){
        if(i->val < min){
            min = i->val;
        }
    }

    return min;
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

    int ma = max_finder(head);
    int mi = min_finder(head);

    cout<< ma - mi ;
    return 0;
}