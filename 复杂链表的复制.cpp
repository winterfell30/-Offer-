/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    void Copy(RandomListNode* pHead)
    {
        RandomListNode *p = pHead;
        while (p != nullptr)
        {
            RandomListNode *temp = new RandomListNode(p->label);
            temp->next = p->next;
            temp->random = nullptr;
            
            p->next = temp;
            
            p = temp->next;
        }
    }
    void Link(RandomListNode* pHead)
    {
        RandomListNode *p = pHead;
        while (p != nullptr)
        {
            RandomListNode *temp = p->next;
            if (p->random) temp->random = p->random->next;
            p = temp->next;
        }
    }
    RandomListNode* Split(RandomListNode* pHead)
    {
        RandomListNode *p = pHead;
        RandomListNode *clonep = nullptr;
        RandomListNode *c = nullptr;
        
        clonep = c = p->next;
        p->next = c->next;
        p = p->next;
        
        while (p != nullptr)
        {
            c->next = p->next;
            c = c->next;
            p->next = c->next;
            p = p->next;
        }
        return clonep;
    }
    RandomListNode* Clone(RandomListNode* pHead)
    {
        if (pHead == nullptr) return pHead;
        Copy(pHead);
        Link(pHead);
        return Split(pHead);
    }
};
