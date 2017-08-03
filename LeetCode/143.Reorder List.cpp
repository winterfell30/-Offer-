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
    void reorderList(ListNode *head) {
        if (head == nullptr || head->next == nullptr)
            return;
        //find median
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next && fast->next->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        //reverse righthalf
        ListNode* pre = slow->next;
        slow->next = nullptr;
        ListNode* last = nullptr;
        while (pre != nullptr)
        {
            ListNode* tmp = pre->next;
            pre->next = last;
            last = pre;
            pre = tmp;
        }
        //merge
        ListNode* first = head;
        ListNode* second = last;
        while (first != nullptr && second != nullptr)
        {
            ListNode* fnxt = first->next;
            ListNode* snxt = second->next;
            first->next = second;
            second->next = fnxt;
            first = fnxt;
            second = snxt;
        }
    }
};
