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

bool detectCycle(Node *head)
{
	Node *fast=head,*slow=head;
    while(fast and fast->next){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow) return true;
    }
    return false;
}
