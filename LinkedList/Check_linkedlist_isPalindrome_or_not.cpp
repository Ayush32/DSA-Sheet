private:
	//getMiddle function
     ListNode* getMiddle(ListNode* head){
     ListNode* slow=head;
     ListNode* fast=head->next;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
        }
        return slow;
    }
    
	//reverse function
    ListNode* reverse(ListNode* head){
        
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nextptr;
        
        while(curr!=NULL){
            
            nextptr=curr->next;
            curr->next=prev;
            
            prev=curr;
            curr=nextptr;
            
        }
        
        return prev;
            
        
    }
    
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }
        
      //get the middle of LL  
     ListNode* middle=getMiddle(head);
        
     //reverse the LL from the next of middle
        
     ListNode* temp=middle->next;
     middle->next=reverse(temp);
     
     //compare the elements from the first and second half of LL
        
     ListNode* head1=head;
     ListNode* head2=middle->next;
     
     while(head2!=NULL){
         if(head1->val!=head2->val){
             return false;
         }
         head1=head1->next;
         head2=head2->next;
     }
    
     //reverse the LL back to its original form
     temp=middle->next;
     middle->next=reverse(temp);
     
        
     return true;
    
        
    }
};
