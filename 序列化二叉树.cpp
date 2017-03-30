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
    vector<int> buf;
    void dfs(TreeNode *p)
    {
        if (!p) buf.push_back(0x3f3f);
        else
        {
            buf.push_back(p->val);
            dfs(p->left);
            dfs(p->right);
        }
    }
    TreeNode* dfs2(int *&p)
    {
        if (*p == 0x3f3f)
        {
            p++;
            return nullptr;
        }
        TreeNode* res = new TreeNode(*p);
        p++;
        res->left = dfs2(p);
        res->right = dfs2(p);
        return res;
    }
    char* Serialize(TreeNode *root) {    
        buf.clear();
        dfs(root);
        int *res = new int[buf.size()];
        for (int i = 0; i < buf.size(); i++)
            res[i] = buf[i];
        return (char*)res;
    }
    TreeNode* Deserialize(char *str) {
    	int *p = (int*)str;
        return dfs2(p);
    }
};
