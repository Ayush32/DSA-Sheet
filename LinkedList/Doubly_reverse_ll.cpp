Node* reverseDLL(Node * head)
{
    //Your code here
    
    if(head == NULL || head->next == NULL) {
        return head;
    }
    Node* forward = NULL;
    Node* curr = head;
    Node* prev = NULL;
    
    while(curr != NULL) 
    {
        forward = curr->next;
        curr->next = prev;
        curr->prev = forward;
        prev = curr;
        curr = forward;
        
    }
    return prev;
}
