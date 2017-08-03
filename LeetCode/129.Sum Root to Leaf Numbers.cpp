/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int calculate(TreeNode* root, int now)
    {
        if (root == nullptr) return 0;
        now = now * 10 + root->val;
        if (root->left == nullptr && root->right == nullptr)
            return now;
        return calculate(root->left, now) + calculate(root->right, now);
    }
    
    int sumNumbers(TreeNode *root) {
        if (root == nullptr) return 0;
        int sum = 0;
        return calculate(root, 0);
    }
};
