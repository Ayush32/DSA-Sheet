class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        int len  = 0;
        while(temp != NULL)
        {
            temp = temp->next;
            len++;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;
        
        if(len == 1){
            head = NULL;
            return head;
        }
            
        while(fast && fast->next) {
            prev = slow;
            slow =  slow->next;
            fast = fast->next->next;
        }
        
        prev->next = slow->next;
        
        return head;
        
        
    }
};
