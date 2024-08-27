class Solution {
  public:
  void insertAtTail(Node*&tail, int d){
    Node*temp = new Node(d);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}
    Node* constructDLL(vector<int>& arr) {
        
        Node*head = new Node(arr[0]);
        Node*tail = head;
        for(int i=1; i<arr.size(); i++){
            insertAtTail(tail, arr[i]);
        }
        return head;
    }
};