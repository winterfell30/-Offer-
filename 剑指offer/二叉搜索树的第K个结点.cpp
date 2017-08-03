/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
    /*
    void dfs(TreeNode* u, vector<TreeNode*>& vec)
    {
        if (u == nullptr) return ;
        dfs(u->left, vec);
        vec.push_back(u);
        dfs(u->right, vec);
    }
    TreeNode* KthNode(TreeNode* pRoot, int k)
    {
        if (pRoot == nullptr || k == 0)
            return nullptr;
        vector<TreeNode*> vec;
        dfs(pRoot, vec);
        if (k > vec.size()) return nullptr;
        return vec[k-1];
    }*/
    TreeNode* KthNode(TreeNode* pRoot, int k)
    {
        if (pRoot == nullptr || k == 0)
            return nullptr;
        vector<TreeNode*> vec;
        stack<TreeNode*> st;
        TreeNode* t = pRoot;
        while (!st.empty() || t)
        {
            if (t)
            {
                st.push(t);
                t = t->left;
            }
            else
            {
                t = st.top();
                st.pop();
                vec.push_back(t);
                t = t->right;
            }
        }
        if (k > vec.size()) return nullptr;
        return vec[k-1];
    }
};
