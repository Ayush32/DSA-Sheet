class Solution
{
    public:
    // function to detect the loop 
    Node* floydCycle(Node* head){
        if(head == NULL)
            return NULL;
        Node* slow = head;
        Node* fast = head;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast)
                return slow;
        }
        return NULL;
    }
    // function to get starting node of the loop where the loop is start
    Node* firstNode(Node* head) {
        if(head == NULL)
            return NULL;
        Node* fast = floydCycle(head);
        Node* slow = head;
        
        if(fast == NULL)
            return NULL;
        
        
        while(slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
        //Function to remove a loop in the linked list.

    void removeLoop(Node* head)
    {
        if(head == NULL)
            return;
            // remove the loop without loosing any nodes
         Node* startingLoop = firstNode(head);
         
         if(startingLoop == NULL)
            return;
         Node* temp = startingLoop;
         while(temp->next != startingLoop){
             temp = temp->next;
         }
        temp->next = NULL;
        
        // code here
        // just remove the loop without losing any nodes
    }
};
