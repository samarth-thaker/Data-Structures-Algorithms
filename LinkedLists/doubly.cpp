#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node*prev;
        node*next;
        node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    
};
void insertAtHead(node*&head, int d){
    node*temp = new node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(node*&tail, int d){
    node*temp = new node(d);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}
void insertAtPosition(node*&head, int position, int d){
    if(position==1){
        insertAtHead(head, d);
    }
    node*temp = head;
    int count = 1;
    while(count<position-1){
        temp = temp->next;
        count++;
    }
    node*nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}
void deleteNode(node*&head, int position){
    if(position==1){
        node*temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        node*curr = head;
        node*prev = NULL;
        int count = 1;
        while(count<position){
            prev = curr;
            curr = curr->next;
            count++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
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
int main(){
    node*head = new node(5);
    node*tail = head;
    insertAtHead(head, 10);
    insertAtTail(tail, 25);
    insertAtTail(tail, 30);
    insertAtPosition(head, 3, 45);
    printList(head);
    deleteNode(head, 4);
    printList(head);
}