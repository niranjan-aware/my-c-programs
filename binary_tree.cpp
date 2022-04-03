//input== 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        data=d;
        left=right=NULL;
    }
};
Node* buildtree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    Node* n=new Node(d);
    n->left=buildtree();
    n->right=buildtree();
    return n;

}

void printpreorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
}

void printineorder(Node* root){
    if(root==NULL){
        return;
    }
     printineorder(root->left);
    cout<<root->data<<" ";
    printineorder(root->right);
}

void printpostorder(Node* root){
    if(root==NULL){
        return;
    }
    printpostorder(root->left);
    printpostorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node* root=buildtree();
    printpreorder(root);
    cout<<endl;
    printineorder(root);
    cout<<endl;
    printpostorder(root);
    cout<<endl;

    return 0;
}