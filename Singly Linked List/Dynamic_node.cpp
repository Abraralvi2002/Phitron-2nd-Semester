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
int main(){
    int v,w,x,y,z;
    cin>>v>>w>>x>>y>>z;
    Node* head = new Node(v);
    Node* a = new Node(w);
    Node* b = new Node(x);
    Node* c = new Node(y);
    Node* d = new Node(z);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    while(head != NULL){
        cout<<head->val<<endl;
        head = head->next;
    }
    return 0;
}