#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node*next;
};
void printList(struct Node *head)

{
    struct Node*temp=head;
  do {
        cout << head -> data << " ";
        head = head -> next;
    } while(head != temp);
}
