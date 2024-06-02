
class Solution {
public:
bool isMirror(TreeNode*root1, TreeNode*root2){
    if(!root1 && !root2){return true;}
    if(!root1 || !root2){return false;}
    return (root1->val == root2->val ) && isMirror(root1->left, root2->right) && isMirror(root1->right, root2->left);
}
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        return isMirror(root->left, root->right);
    }
};