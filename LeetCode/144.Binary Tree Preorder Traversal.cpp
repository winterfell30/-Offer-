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
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> ans;
        if (root == nullptr) return ans;
        stack<TreeNode*> st;
        st.push(root);
        while (!st.empty())
        {
            TreeNode* now = st.top();
            st.pop();
            ans.push_back(now->val);
            if (now->right)
                st.push(now->right);
            if (now->left)
                st.push(now->left);
        }
        return ans;
    }
};
