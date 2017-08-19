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
        ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
        {
            ListNode prehead(INT_MIN);
            ListNode* pNode = &prehead;
            while (l1 && l2)
            {
                if (l1->val < l2->val)
                {
                    pNode->next = l1;
                    l1 = l1->next;
                }
                else
                {
                    pNode->next = l2;
                    l2 = l2->next;
                }
                pNode = pNode->next;
            }
            pNode->next = l1 ? l1 : l2;
            return prehead.next;
        }
};
