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
        ListNode* reverseBetween(ListNode* head, int m, int n)
        {
            ListNode* new_head = new ListNode(0);
            new_head->next = head;
            ListNode* pre = new_head;
            for (int i = 0; i < m-1; ++i)
                pre = pre->next;
            ListNode* cur = pre->next;
            for (int i = 0; i < n-m; ++i)
            {
                ListNode* temp = cur->next;
                cur->next = temp->next;
                temp->next = pre->next;
                pre->next = temp;
            }
            return new_head->next;
        }
};
