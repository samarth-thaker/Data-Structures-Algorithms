/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
void reverse(ListNode*&head, ListNode*curr, ListNode*prev){
    if(curr==NULL){
        head = prev;
        return;
    }
    ListNode*forward=curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
}   
ListNode*reverseList(ListNode*head){
     ListNode*curr = head;
     ListNode*prev = NULL;
     reverse(head, curr, prev);
     return head;
}
    bool isPalindrome(ListNode* head) {
        ListNode*slow = head;
        ListNode*fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *temp=reverseList(slow);
         ListNode *temp1=head;
         while(temp!=NULL){
            if(temp1->val!=temp->val){
                 return false;
            }
            temp=temp->next;
            temp1=temp1->next;
         }
     return true;  
    }
};