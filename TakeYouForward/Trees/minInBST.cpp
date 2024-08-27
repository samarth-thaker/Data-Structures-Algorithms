class Solution {
  public:
    int minValue(Node* root) {
        if(root->left==NULL) {
            return root->data;
        }
        Node*temp = root;
        while(temp->left!=NULL){
            temp = temp->left;
        }
        return temp->data;
    }
};