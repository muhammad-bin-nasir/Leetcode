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
    bool hasCycle(ListNode *head) {
        ListNode* temp = head;
        int count = 0;
        while (temp != nullptr) 
        {
            temp = temp->next;
            count++;
            if (count > 10000)
                return true;
        }
        return false;
        
    }
};