int findCeil(Node* root, int input) {
    int ceil = - 1;
    while(root){
         if(root->data == input){
            ceil = root->data;
            return ceil;
    }
        else if(root->data < input){
            root = root->right;
        
    }
        else if(root->data > input){
            ceil = root->data;
            root = root->left;
    }
        
    }
    return ceil;
   
    // Your code here
}