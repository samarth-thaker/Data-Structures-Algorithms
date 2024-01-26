#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node*next;
};
class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
       stack<int> st;
       Node* temp = head;
       while(temp!=NULL){
           st.push(temp->data);
           temp = temp->next;
       }
       
       temp = head;
       
       while(temp!=NULL){
           temp->data = st.top();
           st.pop();
           temp = temp->next;
       }
       return head;
    }
};
