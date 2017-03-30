/*
struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {
        
    }
};
*/
class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
        if (pNode == nullptr) return nullptr;
        if (pNode->right)       //如果有右节点
        {
            pNode = pNode->right;
            while (pNode->left) pNode = pNode->left;
            return pNode;
        }
        while (pNode->next)     //如果没有右节点，找是哪个父节点的左儿子
        {
            if (pNode == pNode->next->left)
                return pNode->next;
            pNode = pNode->next;
        }
        return nullptr;
    }
};
