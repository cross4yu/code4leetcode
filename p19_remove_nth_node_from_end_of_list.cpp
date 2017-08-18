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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        int k = n;
        ListNode prehead(-1);
        prehead.next = head;
        ListNode* pNode = &prehead;
        while (k > 0)
        {
            pNode = pNode->next;
            --k;
            if (pNode == NULL) return NULL;
        }
        ListNode *runNode = &prehead;
        while (pNode->next != NULL)
        {
            runNode = runNode->next;
            pNode = pNode->next;
        }
        ListNode* temp = runNode->next;
        runNode->next = temp->next;
        delete temp;
        reutrn prehead.next;
    }
};
