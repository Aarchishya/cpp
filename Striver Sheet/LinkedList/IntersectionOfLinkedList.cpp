int findIntersection(Node *firstHead, Node *secondHead)
{
    int flag=0;
    Node *temp=firstHead;
    Node *temp1=secondHead;
    
    while(temp!=NULL)
    {
        while(temp1!=NULL)
        {
           if(temp==temp1)
           {
               flag=1;
            return temp1->data;
              
           }
            temp1=temp1->next; 
            
        }
        temp1=secondHead;
        
        temp=temp->next;   
    }
    if(flag==0)
    {
        return -1;
    }
    
    //Write your code here
}




#2


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
    
    Node *temp=firstHead;
    Node *temp1=secondHead;
    
    if(firstHead==NULL||secondHead==NULL)
    {
        return -1;
    }
    while(temp!=temp1)
    {
        if(temp==NULL)
        {
            temp=secondHead;
        }
        else{
            temp=temp->next;
        }
        if(temp1==NULL)
        {
            temp1=firstHead;
        }
        else{
            temp1=temp1->next;
        }
    }
    if(temp==NULL&&temp1==NULL)
    {
        return -1;
    }
    else
    {
       return temp->data; 
    }
    
    
    
    //Write your code here
}
