class Solution {
  public:
    vector<int> ans;

    void inorder(Node* root) {
        // Base case
        if (root == NULL) {
            return;
        }

        // Inorder traversal: left, root, right
        inorder(root->left);
        ans.push_back(root->data);
        inorder(root->right);
    }

    int minValue(Node* root) {
        // Clear the ans vector before starting the inorder traversal
        ans.clear();
        inorder(root);
        
        // The first element in the inorder traversal of a BST is the minimum element
        return ans.empty() ? -1 : ans[0]; // Return -1 if the tree is empty
    }
};