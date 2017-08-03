class Solution {
public:
    int run(TreeNode *root) {
        if (root == nullptr) return 0;
        if (root->left == nullptr) 
            return run(root->right) + 1;
        else if (root->right == nullptr)
            return run(root->left) + 1;
        else
            return min(run(root->left), run(root->right)) + 1;
    }
};
