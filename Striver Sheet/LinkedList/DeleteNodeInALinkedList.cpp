void deleteNode(LinkedListNode<int> * node) {
    LinkedListNode<int>*temp=node->next;
//     node=node->next;
    node->data=temp->data;
    if(node->next->next!=NULL)
    {
      node->next=node->next->next;  
    }
    else
    {
        node->next=NULL;
    }
    
    delete(temp);
    
    // Write your code here.
}
