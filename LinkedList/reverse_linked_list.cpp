// recursive approach
class Solution {
public:
    
    ListNode* reverse(ListNode* head) {
        // base case
        
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        ListNode* temp = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return temp;
    }
    ListNode* reverseList(ListNode* head) {
      return reverse(head);
    }
};

// iterative approach

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        if(head == NULL || head ->next == NULL)
            return head;
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;
        while(curr != NULL) {
            forward = curr->next;
           curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    
}
