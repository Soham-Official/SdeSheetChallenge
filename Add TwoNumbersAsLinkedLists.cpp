#include <bits/stdc++.h> 
/****************************************************************

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

*****************************************************************/

Node *addTwoNumbers(Node *head1, Node *head2)
{
    Node *dummy=new Node(0);
    Node *temp=dummy;
    int carry=0;
    while(head1 and head2){
        int x=head1->data+head2->data+carry;
        carry=x/10;
        x=x%10;
        temp->next=new Node(x);
        temp=temp->next;
        head1=head1->next;
        head2=head2->next;
    }
    while(head1){
        int x=head1->data+carry;
        carry=x/10;
        x=x%10;
        temp->next=new Node(x);
        temp=temp->next;
        head1=head1->next;
    }
    while(head2){
        int x=head2->data+carry;
        carry=x/10;
        x=x%10;
        temp->next=new Node(x);
        temp=temp->next;
        head2=head2->next;
    }
    if(carry) temp->next=new Node(carry);
    return dummy->next;
}
