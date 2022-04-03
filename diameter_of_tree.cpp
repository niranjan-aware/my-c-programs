//this is the function for finding max diameter of tree
//this is just funtion 
void height_of_tree(Node* root){
    if(root==NULL){
        return 0;
    }
    int h1=height_of_tree(root->left);
    int h2=height_of_tree(root->right);
    return 1+max(h1,h2);
}
void diameter_of_tree(Node* root){
    if(root==NULL){
        return 0;
    }
    int d1=height_of_tree(root->left)+height_of_tree(root->right);
    int d2=diameter_of_tree(root->left);
    int d3=diameter_of_tree(root->right);
    return max(d1,max(d2,d3));
}