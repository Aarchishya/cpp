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
LinkedListNode<int>* reverse(LinkedListNode<int>* head)
{
    LinkedListNode<int>* pre=NULL;
    LinkedListNode<int>* nex=NULL;
    if(head->next==NULL)
    {
        return head;
    }
    while(head!=NULL)
    {
        nex=head->next;
        head->next=pre;
        pre=head;
        head=nex;
    }
    return pre;
}

bool isPalindrome(LinkedListNode<int> *head) {
     if(head==NULL||head->next==NULL)
     {
         return true;
     }
    
    LinkedListNode<int> *slow=head;
    LinkedListNode<int> *fast=head;
    LinkedListNode<int> *dummy=head;
    while(fast->next!=NULL&&fast->next->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    slow->next=reverse(slow->next);
    slow=slow->next;
    while(slow!=NULL)
    {
        
        if(dummy->data!=slow->data)
        {
            return false;
        }
        dummy=dummy->next;
        slow=slow->next;
    }
    return true;
    
    
    // Write your code here.

}
