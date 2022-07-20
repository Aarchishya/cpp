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

Node *findMiddle(Node *head) {
    Node *temp=head;
    Node *temp1=head;
    int count=1;
    while(temp->next!=NULL)
    {
        count++;
        temp=temp->next; 
    }
    for(int i=0;i<count/2;i++)
    {
        temp1=temp1->next;
        
    }
    return temp1;
    
    
    // Write your code here
}
