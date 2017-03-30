/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> res;
        ListNode* p = head;
        while (p != nullptr)
        {
            res.push_back(p->val);
            p = p->next;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
