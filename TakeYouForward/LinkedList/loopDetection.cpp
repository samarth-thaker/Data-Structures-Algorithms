/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// hare and tortoise method
class Solution {
public:
    bool hasCycle(ListNode *head) {
       ListNode*fast = head;
       ListNode*slow = head;
       while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast==slow){
            return true;
            break;
        }
       }
       return false;
    }
};