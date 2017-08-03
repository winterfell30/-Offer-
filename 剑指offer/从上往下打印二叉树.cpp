/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        vector<int> ans;
        if (root == nullptr) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode *p = q.front();
            ans.push_back(p->val);
            q.pop();
            if (p->left) q.push(p->left);
            if (p->right) q.push(p->right);
        }
        return ans;
    }
};
