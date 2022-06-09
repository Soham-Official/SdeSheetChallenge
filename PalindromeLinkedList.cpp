#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int> * reverse(LinkedListNode<int> *head){
    LinkedListNode<int> *prev=NULL,*curr=head,*next=head;
    while(next){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    LinkedListNode<int> *fast=head;
    LinkedListNode<int> *slow=head;
    while(fast and fast->next){
        fast=fast->next->next;
        slow=slow->next;
    }
    LinkedListNode<int> *head2;
    if(fast) head2=reverse(slow->next);
    else head2=reverse(slow);
    while(head2){
        if(head->data !=head2->data) return false;
        head=head->next;
        head2=head2->next;
    }
    return true;
    
}
