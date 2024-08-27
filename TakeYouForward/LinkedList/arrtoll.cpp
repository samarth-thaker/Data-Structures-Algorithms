void insertAtTail(Node*& head, Node*& tail, int data) {
        Node* temp = new Node(data);
        if (tail == NULL) {
            // This is the first node, so head and tail both should point to it
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }

    Node* constructLL(vector<int>& arr) {
        Node* head = NULL;
        Node* tail = NULL;
        for(int i = 0; i < arr.size(); i++) {
            insertAtTail(head, tail, arr[i]);
        }
        return head;
    }