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
    ListNode *insertionSortList(ListNode *head) {
        if (head == nullptr || head -> next == nullptr)
            return head;
        ListNode dummy(0), *p;
        dummy.next = insertionSortList(head->next);
        p = &dummy;
        while (p && p->next && head->val > p->next->val)
        {
            p = p->next;
        }
        head->next = p->next;
        p->next = head;
        return dummy.next;
    }
};
