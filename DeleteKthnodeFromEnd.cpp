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

LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    if(K==0 or !head) return head;
    LinkedListNode<int>*fast=head;
    LinkedListNode<int>*slow=NULL;
    int k=0;
    while(fast){
        if(k==K) slow=head;
        if(k>K) slow=slow->next;
        fast=fast->next;
        k++;
    }
    if(slow) slow->next=slow->next->next;
    else head=head->next;
    return head;
}
