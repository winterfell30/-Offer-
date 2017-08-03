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
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> ans;
        if (root == nullptr) return ans;
        stack<TreeNode*> st;
        st.push(root);
        while (!st.empty())
        {
            TreeNode *now = st.top();
            if (now->left == nullptr && now->right == nullptr)
            {
                ans.push_back(now->val);
                st.pop();
            }
            else 
            {
                if (now->right)
                {
                	st.push(now->right);
                    now->right = nullptr;
                }
                if (now->left)
                {
                	st.push(now->left);
                    now->left = nullptr;
                }
            }
        }
        return ans;
    }
};
