/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode ans(0);
        ListNode* p = &ans;
        int add = 0;
        while (l1 != NULL || l2 != NULL || add)
        {
            if (l1 != NULL) add += l1->val, l1 = l1->next;
            if (l2 != NULL) add += l2->val, l2 = l2->next;
            p->next = new ListNode(add%10);
            p = p->next;
            add /= 10;
        }
        return ans.next;
    }
};
