#include <iostream>
using namespace std;
class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void reverse(ListNode*&head, ListNode*curr, ListNode*prev){
    if(curr==NULL){
        head = prev;
        return;
    }
    ListNode*forward=curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
}   

ListNode *reverseList(ListNode *head)
{
/* 
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    ListNode *prev = NULL;
    ListNode *curr = head;
    ListNode *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;`
        prev = curr;
        curr = forward;
    }
    return prev; */
    ListNode*curr = head;
    ListNode*prev = NULL;
    reverse(head,   curr, prev);
    return head;

}
