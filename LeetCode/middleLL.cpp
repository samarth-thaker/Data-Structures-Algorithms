/* Given the head of a singly linkedlist,return the middle node of it. If there are 2 middle nodes, return the second one. */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include<bits/stdc++.h>
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
class Solution {
public:
int getLength(ListNode*head){
    int l=0;
    while(head!=NULL){
        l++;
        head = head->next;
    }
    return l;
}
    ListNode* middleNode(ListNode* head) {
    int n = getLength(head);
    int ans = n/2;
    ListNode*temp = head;
    while(ans--){
        temp = temp->next;

    }
    return temp;
    }
};;