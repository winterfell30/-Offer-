class Solution {
public:
    bool IsBalance(TreeNode* pRoot, int& depth)
    {
        if (pRoot == nullptr) return true;
        int max_left = 0, max_right = 0;
        if (IsBalance(pRoot->left, max_left) && IsBalance(pRoot->right, max_right))
        {
            if (abs(max_left - max_right) > 1) return false;
            depth = max(max_left, max_right) + 1;
            return true;
        }
        return false;
    }
    bool IsBalanced_Solution(TreeNode* pRoot) {
        int depth = 0;
        return IsBalance(pRoot, depth);
        
    }
};
