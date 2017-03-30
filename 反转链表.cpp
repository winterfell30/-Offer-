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
    ListNode* ReverseList(ListNode* pHead) {
        if (pHead == nullptr) return nullptr;
        ListNode* now = pHead;
        ListNode* pre = nullptr;
        ListNode* ans = nullptr;
        while (now != nullptr)
        {
            ListNode* nxt = now->next;
            if (nxt == nullptr)
                ans = now;
            now->next = pre;
            pre = now;
            now = nxt;
        }
        return ans;
    }
};
