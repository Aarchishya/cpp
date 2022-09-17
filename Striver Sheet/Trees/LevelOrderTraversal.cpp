void levelOrderTraversal(Node* node)
{
  if(node==NULL)
  {
    return;
  }
  queue<Node*>qnode;
  qnode.push(node);
  while(qnode!=empty())
  {
    Node* temp=qnode.front();
    qnode.pop();
    cout<<temp->val;
    if(temp->left!=NULL)
    {
      qnode.push(temp->left);
    }
     if(temp->right!=NULL)
    {
      qnode.push(temp->right);
    }
  }
}
  
