class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        else if(root->left==NULL && root->right==NULL){
            return 1;
        }
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return 1 + (max(left, right));
    }
};