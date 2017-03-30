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
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        
        if (pre.empty()) return nullptr;
        TreeNode* root = new TreeNode(pre[0]);
        int index = find(vin.begin(), vin.end(), pre[0]) - vin.begin();
        root->left = reConstructBinaryTree(vector<int>(pre.begin() + 1, pre.begin() + index + 1), 
                                                       vector<int>(vin.begin(), vin.begin() + index));
        root->right = reConstructBinaryTree(vector<int>(pre.begin() + index + 1, pre.end()),
            vector<int>(vin.begin() + index + 1, vin.end()));
        return root;
    }
};
