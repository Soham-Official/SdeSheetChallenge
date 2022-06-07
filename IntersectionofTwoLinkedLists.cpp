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

int findIntersection(Node *firstHead, Node *secondHead)
{
    Node *node1=firstHead,*node2=secondHead;
    while(node1!=node2){
        if(!node1){
            node1=secondHead;
        }
        else node1=node1->next;
        if(!node2){
            node2=firstHead;
        }
        else node2=node2->next;    

    }
    if(!node1) return -1;
    else return node1->data;
}
