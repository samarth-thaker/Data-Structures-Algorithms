
class Solution {
public:
void Traverse(TreeNode*root, int val, int depth, int level){
    if(!root) return ;
    if(level<depth-1){
        Traverse(root->left, val, depth, level+1);
        Traverse(root->right, val, depth, level+1);
    }else{
        TreeNode* ptr = root->left;
        root->left = new TreeNode(val);
        root->left->left = ptr;
        ptr = root->right;
        root->right = new TreeNode(val);
        root->right->right = ptr;
    }
}
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode*ptr = new TreeNode(val);
            ptr->left = root;
            return ptr;
        }
        Traverse(root,val, depth, 1);
        return root;
    }
};