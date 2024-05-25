class Solution {
public:
vector<int>arr;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root!=NULL){
            
            postorderTraversal(root->left);
            postorderTraversal(root->right);
            arr.push_back(root->val);
        }
        
        
        return arr;
    }
};