//Method - 1: Double traverse
DLLNode* reverseDLL(DLLNode* head) {
        DLLNode* temp = head;
        stack<int> st;
        while(temp!=NULL){
            st.push(temp->data);
            temp  = temp->next;
        }
        temp = head;
        while(temp!=NULL){
            temp->data = st.top();
            st.pop();
            temp = temp->next;
        }
        return head;
}
//METHOD 2: 
 DLLNode* reverseDLL(DLLNode* head) {
        DLLNode* last = head; DLLNode* curr = head;
        while (curr!=NULL){
             last = curr->prev;
             curr->prev = curr->next;
             curr->next = last;
             curr = curr->prev;
        }
        if (last != NULL) {
        head = last->prev;
    }
        return head;
    }
