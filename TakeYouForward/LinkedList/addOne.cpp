 void listReverse(Node*& head, Node* curr, Node* prev) {
        if (curr == NULL) {
            head = prev;
            return;
        }
        Node* forward = curr->next;
        listReverse(head, forward, curr);
        curr->next = prev;
    }

    Node* addOne(Node* head) {
        // Reverse the linked list
        Node* curr = head;
        Node* prev = NULL;
        listReverse(head, curr, prev);

        // Add one to the head of the reversed list
        Node* temp = head;
        int carry = 1;
        while (temp != NULL && carry > 0) {
            int sum = temp->data + carry;
            carry = sum / 10;
            temp->data = sum % 10;
            prev = temp;
            temp = temp->next;
        }

        // If there's still a carry left, we need to add a new node
        if (carry > 0) {
            prev->next = new Node(carry);
        }

        // Reverse the list back to its original order
        curr = head;
        prev = NULL;
        listReverse(head, curr, prev);

        return head;
    }