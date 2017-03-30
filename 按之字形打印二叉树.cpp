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
    vector<vector<int> > Print(TreeNode* pRoot) {
        vector<vector<int> > ans;
        if (pRoot == nullptr) return ans;
        queue<TreeNode*> q;
        q.push(pRoot);
        bool rev = 1;
        while (!q.empty())
        {
            int n = q.size();
            vector<int> t;
            for (int i = 0; i < n; i++)
            {
                TreeNode* now = q.front();
                q.pop();
                t.push_back(now->val);
                if (now->left) q.push(now->left);
                if (now->right) q.push(now->right);
            }
            if (!rev) reverse(t.begin(), t.end());
            ans.push_back(t);
            rev = !rev;
        }
        return ans;
    }
    
};
