// Approach 2 - leetcode

public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1 == NULL) {  // if first list is empty
            return list2;
        }
        
        if(list2 == NULL){  // if second list is empty 
            return list1;
        }
        ListNode* temp;
       ListNode* dummy = new ListNode();
        temp = dummy;
        
        while(list1 && list2) {
            if(list1->val <= list2->val)
            {
                temp->next = list1;
                list1  = list1->next;
            }
            else {
                 temp->next = list2;
                list2  = list2->next;
            }
            
            temp = temp->next;
        }
        if(list1) 
            temp->next = list1;
        
        if(list2)
            temp->next = list2;
        
        return dummy->next;
    }
};

// Approach 1 - love babbar 

private:
    
    ListNode* solve(ListNode* list1,ListNode* list2) 
    {
        // if only one node is present in list1 then points the entire list1 of next to         list2
        
        if(list1->next == NULL) {
            list1->next = list2;
            return list1;
        }
        
        ListNode* curr1 = list1;
        ListNode* next1 = curr1->next;
        ListNode* curr2 = list2;
        ListNode* next2 = curr2->next;
        
        
        while(curr2 != NULL && next1 != NULL) {
            if((curr2->val >= curr1->val) && (curr2->val <= next1->val)) 
            {
                curr1->next = curr2;
                next2 = curr2->next;
                curr2->next = next1;
                curr1 = curr2;
                curr2 = next2;
            }
            
            else {
                
                curr1 = next1;
                next1 = next1->next;
                
        // if next1 is null then point the curr1->next list to whole curr2 
                if(next1 == NULL) {
                    curr1->next = curr2;
                    return list1;
                }
            }
        }
        return list1;
    }
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1 == NULL) {  // if first list is empty
            return list2;
        }
        
        if(list2 == NULL){  // if second list is empty 
            return list1;
        }
        
        if(list1->val <= list2->val){
          return solve(list1,list2);
        }
        else{
         return  solve(list2,list1);
        }
    }
};
