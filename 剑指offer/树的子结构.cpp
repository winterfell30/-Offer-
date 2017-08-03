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
    bool check(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if (pRoot2 == nullptr) return true;
        if (pRoot1 == nullptr) return false;
        if (pRoot1->val != pRoot2->val) return false;
        return check(pRoot1->left, pRoot2->left) && check(pRoot1->right, pRoot2->right);
    }
    
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if (pRoot2 == nullptr || pRoot1 == nullptr) 
            return false;
        if (check(pRoot1, pRoot2))
            return true;
        return HasSubtree(pRoot1->left, pRoot2) || HasSubtree(pRoot1->right, pRoot2);
    }
};
