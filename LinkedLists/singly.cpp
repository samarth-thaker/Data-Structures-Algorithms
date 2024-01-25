#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node*next;
        node(int data){
            this->data = data;
            this->next = NULL;
        }

};
void insertAtHead(node*&head, int data){
    node*temp = new node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(node*&tail, int data){
    node*temp = new node(data);
    tail->next = temp;
    tail = temp;
}
void printList(node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
void insertAtPosition(node*&head,int p, int d){
    node*temp = head;
    int count = 1;
    while(count<p-1){
        temp = temp->next;
        count++;
    }
    node*nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void deleteNode(node*&head,int position){
   if(position==1){
    node*temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
   }
   else{
    int count = 1;
    node*curr = head;
    node*prev = NULL;
    while(count<position){
        prev = curr;
        curr = curr->next;
        count++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
   }


}
int main(){
    node*node1 = new node(10);
    /* cout<<node1->data<<endl;
    cout<<node1->next<<endl; */
    node*head = node1;
    /*printList(head);
    insertAtHead(head, 12);
    printList(head); */
    node*tail = node1;
    insertAtTail(tail, 12);
    //printList(head);
    insertAtTail(tail,15);
    insertAtPosition(head, 3, 18);
    printList(head);
    deleteNode(head, 3);
    printList(head);
}

