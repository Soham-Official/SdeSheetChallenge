#include <bits/stdc++.h> 
LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    if(!head) return NULL;
    LinkedListNode<int> *temp=head;
    while(temp){
        LinkedListNode<int> *dummy=new LinkedListNode<int>(temp->data);
        dummy->random=NULL;
        dummy->next=temp->next;
        temp->next=dummy;
        temp=temp->next->next;
    }
    temp=head;
    while(temp) {
        if(temp->random)
        temp->next->random=temp->random->next;
        temp=temp->next->next;
    }
    temp=head;
    head=temp->next;
    while(temp){
        LinkedListNode<int> *ptr=temp->next->next;
        if(!ptr) temp->next->next=NULL;
        else
        temp->next->next=ptr->next;
        temp->next=ptr;
        temp=temp->next;
    }
    return head;
}
