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
Node* mergetwolists(Node* a,Node* b)
{
    Node* temp=new Node(0);
    Node* res=temp;
    while(a!=NULL&&b!=NULL)
    {
        if(a->data<b->data)
        {
            temp->child=a;
            temp=a;
            a=a->child;
        }
        else
        {
            temp->child=b;
            temp=b;
            b=b->child;
        }
    }
    if(a) temp->child=a;
    else temp->child=b;
    return res->child;
}

Node* flattenLinkedList(Node* head) 
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
     Node* down = head;
   Node * right =flattenLinkedList(head->next);
   down->next  =NULL;
   head = mergetwolists(down,right);
   return head;
	// Write your code here
}
