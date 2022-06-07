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

Node *firstNode(Node *head)
{
	Node *fast=head,*slow=head;
    int flag=0;
    while(fast and fast->next){
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast) {
            flag=1;
            break;
        }
    }
    if(flag==0) return NULL;
    slow=head;
    while(slow!=fast){
         slow=slow->next;
         fast=fast->next;
    }
    return slow;
}
