#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        string s;
        Node* next;
        Node* prev;
    Node(string s){
        this->s = s;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertion_tail(Node* &head,Node* &tail,string s){
    Node* newnode = new Node(s);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

Node* find_element(Node* head,string element){
    Node* tmp = head;
    while(tmp != NULL){
        if(tmp->s == element){
            break;
        }
        tmp = tmp->next;
    }

    return tmp;
}

int main(){
    
    Node* head = NULL;
    Node* tail = NULL;

    string s;
    while(true){
        cin>>s;
        if(s == "end"){
            break;
        }
        insertion_tail(head,tail,s);
    }
    int q;
    cin>>q;

    Node* currentpos = head;

    for(int i = 1;i<= q;i++){
        string cmd,element;
        cin>>cmd;
        if(cmd == "visit"){
            cin>>element;
            Node* found = find_element(head,element);
            if(found == NULL){
                cout<<"Not Available"<<endl;
            }else{
                currentpos = found;
                cout<<currentpos->s<<endl;
            }
        }else if(cmd == "next"){
            if(currentpos->next == NULL){
                cout<<"Not Available"<<endl;
            }else{
                currentpos = currentpos->next;
                cout<<currentpos->s<<endl;
            }

        }else if(cmd == "prev"){
            if(currentpos->prev == NULL){
                cout<<"Not Available"<<endl;
            }else{
                currentpos = currentpos->prev;
                cout<<currentpos->s<<endl;
            }
        }
    }
    return 0;
}