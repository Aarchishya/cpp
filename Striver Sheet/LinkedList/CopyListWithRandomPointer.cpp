#include <bits/stdc++.h> 
/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    LinkedListNode<int> *itr=head;
    LinkedListNode<int> *front=head;
    while(itr!=NULL)
    {
      front=itr->next;
    LinkedListNode<int> *dummy=new LinkedListNode<int>(itr->data);
        itr->next=dummy;
        dummy->next=front;
        itr=front;
    }
     itr=head;
     while(itr!=NULL)
     {
         if(itr->random!=NULL)
         {
             itr->next->random=itr->random->next;   
         }
         itr=itr->next->next;
     }
    itr=head;
     LinkedListNode<int>* pseudo=new LinkedListNode<int> (0);
       LinkedListNode<int> *copy=pseudo;
    while(itr!=NULL)
    {
        front=itr->next->next;
        copy->next=itr->next;
        itr->next=front;
        copy=copy->next;
        itr=itr->next;
    }
    return pseudo->next;
    // Write your code here.
}


#2
#include <bits/stdc++.h> 
/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    
 LinkedListNode<int> *itr=head;

 

       while(itr!=NULL)

       {  

           LinkedListNode<int> *front=itr->next;

           LinkedListNode<int> *dumy=new LinkedListNode<int> (itr->data);

       dumy->next=itr->next;

        itr->next=dumy;

        itr=front;

       }

   itr=head;

   while(itr!=NULL)

   {

       itr->next->random=itr->random;

       itr=itr->next->next;

   }

   itr=head;

   LinkedListNode<int>* copy=new LinkedListNode<int> (0);

   LinkedListNode<int> *newnode=copy;

   while(itr!=NULL)

   {

      LinkedListNode<int> *front=itr->next->next;

   copy->next=itr->next;

       itr->next=front;

       itr=front;

       copy=copy->next;

   }

 return newnode->next  ;

}


