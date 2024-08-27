class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int findLength(struct Node* slow, struct Node* fast){
        int count = 1;
        fast = fast->next;
        while(fast!=slow){
            {
            fast = fast->next;
            count ++;
        }
        }
        return count;
    }
    int countNodesinLoop(struct Node *head) {
        struct Node* fast = head;
        struct Node* slow = head;
       
        while(fast!=NULL && fast->next!=NULL){
            fast= fast->next->next;
            slow = slow->next;
            
            if(fast==slow){
                return findLength(slow, fast);
                break;
            }
        }
        return 0;
    }
};