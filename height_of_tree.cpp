//this is just funtion 
void height_of_tree(Node* root){
    if(root==NULL){
        return 0;
    }
    int h1=height_of_tree(root->left);
    int h2=height_of_tree(root->right);
    return 1+max(h1,h2);
}