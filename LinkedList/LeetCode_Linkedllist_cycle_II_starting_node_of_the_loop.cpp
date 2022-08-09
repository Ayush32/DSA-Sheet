class Solution {
public:
    ListNode* floydCycle(ListNode* head) {
        if(head == NULL)
            return NULL;
        
        ListNode* slow  = head;
        ListNode* fast = head;
        
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast)
                return slow;
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
        
        
        ListNode* temp  = floydCycle(head);
        
        if(temp == NULL)
            return NULL;
        
        ListNode* slow = head;
        
        while(temp != slow) {
            
            slow = slow->next;
            temp = temp->next;

        }
        return temp;
    }
};
