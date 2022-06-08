#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
   Node<int>* dummy=new Node<int>(0);
   Node<int>* temp=dummy; 
   while(first and second){
       if(first->data<=second->data){
           temp->next=first;
           temp=first;
           first=first->next;
       }
       else{
           temp->next=second;
           temp=second;
           second=second->next;
       }     
   }
    while(first){
           temp->next=first;
           temp=first;
           first=first->next;
    }
    while(second){
           temp->next=second;
           temp=second;
           second=second->next;
    }
    return dummy->next;
}
