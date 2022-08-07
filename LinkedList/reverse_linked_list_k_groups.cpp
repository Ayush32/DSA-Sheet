
class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
      // base call
        if(head == NULL)
            return NULL;
        
        node* prev = NULL;
        node* curr = head;
        node* forward = NULL;
        int count  = 0;
        // recursive method same as reverse a linked list
        while(curr != NULL && count  < k)
        {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            count++;
        }
        // recursive call on remaining element;
        if(forward != NULL) {
            head->next = reverse(forward,k);
        }
//       step 4 return head of reverse list
        return prev;
    }
};


//{ Driver Code Starts.

/* Drier program to test above function*/


// } Driver Code Ends
