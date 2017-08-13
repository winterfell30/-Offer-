/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        if (head == nullptr) return head;
        RandomListNode *p = head, *newNode;
        while (p != nullptr)
        {
            newNode = new RandomListNode(p->label);
            newNode->next = p->next;
            p->next = newNode;
            p = newNode->next;
        }
        p = head;
        while (p != nullptr)
        {
            newNode = p->next;
            if (p->random)
                newNode->random = p->random->next;
            p = newNode->next;
        }
        p = head;
        head = newNode = p->next;
        
        p->next = newNode->next;
        p = p->next;
        
        while (p != nullptr)
        {
            newNode->next = p->next;
            newNode = newNode->next;
            p->next = newNode->next;
            p = p->next;
        }
        return head;
    }
};
