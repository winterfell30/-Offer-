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
    vector<vector<int> > ans;
    vector<int> path;
    void dfs(TreeNode* root, int now, int expectNumber)
    {
        path.push_back(root->val);
        if (root->left == nullptr && root->right == nullptr && expectNumber == now + root->val)
            ans.push_back(path);
        if (root->left != nullptr) 
            dfs(root->left, now + root->val, expectNumber);
        if (root->right != nullptr) 
            dfs(root->right, now + root->val, expectNumber);
        path.pop_back();
    }
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        if (root == nullptr) return {};
        dfs(root, 0, expectNumber);
        return ans;
    }
};
