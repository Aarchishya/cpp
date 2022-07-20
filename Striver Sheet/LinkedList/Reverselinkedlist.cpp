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

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(head==NULL||head->next==NULL)
        return head;
    LinkedListNode<int> *prev=NULL;
    LinkedListNode<int> *curr=head;
    LinkedListNode<int> *nextnode;
    while(curr->next!=NULL)
    {
        nextnode=curr->next;
        curr->next=prev;
//         nextnode->next=curr;
        
//         update
        prev=curr;
        curr=nextnode;
//         nextnode=nextnode->next;
        
    }
    curr->next=prev;
   head->next=NULL;
    head=curr;
    return head;
    // Write your code here
}
