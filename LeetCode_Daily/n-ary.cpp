class Solution
{
public:
    void dfs(Node *root, vector<int> &nums)
    {
        if (root == nullptr)
        {
            return;
        }
        for (auto node : root->children)
        {
            dfs(node, nums);
        }
        nums.push_back(root->val);
    }

    vector<int> postorder(Node *root)
    {
        vector<int> nums;
        dfs(root, nums);
        return nums;
    }
};