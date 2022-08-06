void deleteNode(int position,Node* &head)
{
  // deleting first or head node
  if(position == 1){
    Node *temp = head;
    head = head ->next; //  move head 1 position 
    delete temp;
  }
  
  else{
    // delete any middile or last Node
    int count  = 1;
    Node * curr = head;
    Node* prev = NULL;
    
    while(count < position) {
      prev = curr;
      curr = curr->next;
    }
    
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}
}
