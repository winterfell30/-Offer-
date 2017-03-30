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
    TreeNode *left = nullptr;
    TreeNode *right = nullptr;
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        if (pRootOfTree == nullptr) 
            return nullptr;
        Convert(pRootOfTree->left);
        if (right == nullptr)
            left = right = pRootOfTree;
        else
        {
            right->right = pRootOfTree;
            pRootOfTree->left = right;
            right = pRootOfTree;
        }
        Convert(pRootOfTree->right);
        return left;
    }
};
