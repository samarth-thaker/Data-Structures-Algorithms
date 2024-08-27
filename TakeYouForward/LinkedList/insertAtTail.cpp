void insertAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);
    if (tail != NULL) {
        tail->next = temp;
    }
    tail = temp;
}

Node* insertAtEnd(Node* head, int x) {
    if (head == NULL) {
        // If the list is empty, create a new node and return it as the head
        head = new Node(x);
        return head;
    }
    
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    // Now temp is the last node
    insertAtTail(temp, x);
    
    return head;
}