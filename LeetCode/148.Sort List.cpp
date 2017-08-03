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
    ListNode *sortList(ListNode *head) {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode *slow = head, *fast = head->next;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *right = sortList(slow->next);
        slow->next = nullptr;
        ListNode *left = sortList(head);
        return merge(left, right);
    }
    
    ListNode *merge(ListNode *left, ListNode *right)
    {
        ListNode *dummy = new ListNode(0);
        ListNode *p = dummy;
        while (left && right)
        {
            if (left->val < right->val)
            {
                p->next = left;
                left = left->next;
            }
            else
            {
                p->next = right;
                right = right -> next;
            }
            p = p->next;
        }
        if (left) p->next = left;
        if (right) p->next = right;
        return dummy->next;
    }
};
