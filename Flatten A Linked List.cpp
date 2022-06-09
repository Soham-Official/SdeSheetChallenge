#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

class Node {
public:
	int data;
	Node* next;
	Node* child;

	Node(int data) {
		this->data = data;
		this->next = NULL;
		this->child = NULL;
	}
};

*****************************************************************/

Node* flattenLinkedList(Node* head) 
{
	// Write your code here
    if(!head->next) return head;
    Node *head2=flattenLinkedList(head->next);
    Node* dummy=new Node(0);
    Node *temp=dummy;
    head->next=NULL;
    while(head and head2){
        if(head->data<=head2->data){
            temp->child=head;
            temp=temp->child;
            head=head->child;
        }
        else{
            temp->child=head2;
            temp=temp->child;
            head2=head2->child;
        }
    }
    if(head) temp->child=head;
    if(head2) temp->child=head2;
    return dummy->child;  
}
