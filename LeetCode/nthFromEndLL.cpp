
class Solution {
public:

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* first = dummy;
    ListNode* second = dummy;

    for (int i = 0; i < n + 1; i++) {
        first = first->next;
    }

   
    while (first != NULL) {
        first = first->next;
        second = second->next;
    }

    ListNode* temp = second->next;
    second->next = temp->next;
    delete temp;

    return dummy->next;
}
    
};