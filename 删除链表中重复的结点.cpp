/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        if (pHead == nullptr || pHead->next == nullptr) return pHead;
        ListNode* first = new ListNode(-1);
        first->next = pHead;
        ListNode* pre = first;
        ListNode* p = pHead;
        ListNode* next = nullptr;
        while (p != nullptr && p->next != nullptr)
        {
            next = p->next;
            if (p->val == next->val)
            {
                while (next != nullptr && next->val == p->val)
                    next = next->next;
                pre->next = next;
                p = next;
            }
            else
            {
                pre = p;
                p = next;
            }
        }
        return first->next;
    }
};
