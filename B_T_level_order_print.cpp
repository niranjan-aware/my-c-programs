#include<bits/stdc++.h>
using namespace std;

class Node{
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
    Node* n=new node(d);
    n->left=buildtree();
    n->right=buildtree();
    return n;
}

void level_printprder(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.empty();
        if(temp==NULL){
            cout<<endl;
            q.pop();
        }
        if(!q.empty){
            q.push(NULL);
        }
        else{
            q.pop();
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }

    return ;
}

int main(){


    return 0;
    
}