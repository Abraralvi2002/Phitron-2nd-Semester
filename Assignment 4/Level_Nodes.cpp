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

Node* input_tree(){
    int val;
    cin>>val;

    Node* root;

    if(val == -1){
        root = NULL;
    }else{
        root = new Node(val);
    }
    queue<Node*> q;
    if(root){
        q.push(root);
    }

    while(!q.empty()){

        Node* f = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* myleft,* myright;

        if(l == -1){
            myleft = NULL;
        }else{
            myleft = new Node(l);
        }

        if(r == -1){
            myright = NULL;
        }else{ 
            myright = new Node(r);
        }

        f->left = myleft;
        f->right = myright;

        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }

    return root;
}

int maximum_depth(Node* root){
    if(root == NULL){
        return 0;
    }
    int l = maximum_depth(root->left);
    int r = maximum_depth(root->right);

    return max(l,r) + 1;
}

void x_th_level(Node* root, int x){
    if(root == NULL){
        return;
    }
    if(x == 0){
        cout<<root->val<<" ";
        return;
    }
    x_th_level(root->left,x-1);
    x_th_level(root->right,x-1);
}

int main(){
    
    Node* root = input_tree();
    int depth = maximum_depth(root);
    int x;
    cin>>x;
    if(x>=depth){
        cout<<"Invalid";
    }else{
        x_th_level(root,x);
    }

    return 0;
}