/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if (pListHead == nullptr || k == 0)
            return nullptr;
        ListNode *p = pListHead;
        for (int i = 0; i < k - 1; i++)
            if (p->next != nullptr)
                p = p->next;
        	else
                return nullptr;
        //现在p在第k个节点
        ListNode *ans = pListHead;
        while (p->next != nullptr)
        {
            p = p->next;
            ans = ans->next;
        }
        return ans;
    }
};
