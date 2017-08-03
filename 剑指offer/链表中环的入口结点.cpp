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
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
        if (pHead == nullptr || pHead->next == nullptr || pHead->next->next == nullptr) return nullptr;
        ListNode *fast = pHead->next->next;
        ListNode *slow = pHead->next;
        while (fast != slow)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        if (fast != slow) return nullptr;
        fast = pHead;
        while (fast != slow)
        {
            fast = fast->next;
            slow = slow->next;
        }
        return fast;
    }
};
