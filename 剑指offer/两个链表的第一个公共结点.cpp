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
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        if (pHead1 == nullptr || pHead2 == nullptr) return nullptr;
        ListNode *p1 = pHead1, *p2 = pHead2;
        int len1 = 0, len2 = 0;
        while (p1 != nullptr)
        {
            p1 = p1->next;
            len1++;
        }
        while (p2 != nullptr)
        {
            p2 = p2->next;
            len2++;
        }
        if (len1 > len2)
        {
            int sub = len1 - len2;
            while (sub--) pHead1 = pHead1->next;
        }
        else
        {
            int sub = len2 - len1;
            while (sub--) pHead2 = pHead2->next;
        }
        while (pHead1 != pHead2)
        {
            pHead1 = pHead1->next;
            pHead2 = pHead2->next;
        }
        return pHead1;
    }
};
