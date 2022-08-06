#include <bits/stdc++.h> 
/********************************

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

********************************/
Node *rotate(Node *head, int k) {
    
    if(head==NULL||head->next==NULL||k==0)
    {
        return head;
    }
    for(int i=0;i<k;i++)
    {
      Node* temp=head; 
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    Node* last=temp->next;
    temp->next=NULL;
    last->next=head;
    head=last;
   
    }
    return head;
     // Write your code here.
}


#2




node* rotateRight(node* head,int k) {
    if(head == NULL||head->next == NULL||k == 0) return head;
    //calculating length
    node* temp = head;
    int length = 1;
    while(temp->next != NULL) {
        ++length;
        temp = temp->next;
    }
    //link last node to first node
    temp->next = head;
    k = k%length; //when k is more than length of list
    int end = length-k; //to get end of the list
    while(end--) temp = temp->next;
    //breaking last node link and pointing to NULL
    head = temp->next;
    temp->next = NULL;
        
    return head;
}

