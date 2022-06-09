#include <bits/stdc++.h> 
/********************************

    Following is the class structure of the Node class:
    
    class Node
    {
    	public:
    	    int data;
    	    Node *next;
    	    Node(int data)
    	    {
    	        this->data = data;
    	        this->next = NULL;
    	    }
    };

********************************/


Node *rotate(Node *head, int k) {
     // Write your code here.
    if(!head) return head;
    int len=1;
    Node *temp=head;
    while(temp->next){
        len++;
        temp=temp->next;    
    }
    temp->next=head;
    k=k%len;
    k=len-k;
    temp=head;
    int c=1;
    while(c<k){
        temp=temp->next;
        c++; 
    }
    head=temp->next;
    temp->next=NULL;
    return head;
}
