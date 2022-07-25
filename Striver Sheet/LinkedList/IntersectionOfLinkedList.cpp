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
