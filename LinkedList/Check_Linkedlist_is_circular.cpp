bool isCircular(Node *head)
{
   // Your code here
   if(head == NULL)
    return true;
    
    if(head ->next == NULL){
        return false;
    }
    
    Node* temp = head->next;  // start from head next 
    
    while(temp != NULL && temp != head) {
        temp = temp ->next;
        
    }
    if(temp == NULL)  // if non circular
        return false;
    if(temp == head)  // for circular
        return true;
}
