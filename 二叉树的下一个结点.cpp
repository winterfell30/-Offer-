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
        if (pNode->right)       //������ҽڵ�
        {
            pNode = pNode->right;
            while (pNode->left) pNode = pNode->left;
            return pNode;
        }
        while (pNode->next)     //���û���ҽڵ㣬�����ĸ����ڵ�������
        {
            if (pNode == pNode->next->left)
                return pNode->next;
            pNode = pNode->next;
        }
        return nullptr;
    }
};
