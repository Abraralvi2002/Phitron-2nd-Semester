#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* left;
        Node* right;
        Node(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

void level_order(Node* root){

    if(root == NULL){
        cout<<"No Tree Available"<<endl;
        return;
    }

    queue<Node*> q;

    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        cout<<f->val<<" ";

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
}

Node* convert_ar_to_bst(int ar[], int n, int l, int r){

    if(l > r){
        return NULL;
    }

    int mid = (l + r) / 2;
    Node* root = new Node(ar[mid]);

    Node* lroot = convert_ar_to_bst(ar,n,l,mid - 1);
    Node* rroot = convert_ar_to_bst(ar,n,mid + 1,r);

    root->left = lroot;
    root->right = rroot;

    return root;

}

int main(){
    
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0;i<n;i++){
        cin>>ar[i];
    }

    Node* root = convert_ar_to_bst(ar,n,0,n-1);
    level_order(root);

    return 0;
}