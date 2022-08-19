class Solution
{
    public:
    Node* removeAllDuplicates(struct Node* head)
    {
        //code here 
      TC- O(n) and SC- O(n)
        map<int,int>mp;
        Node* dummy = new Node(-1);
        Node* temp = dummy;
        Node* curr = head;
        while(curr != NULL)
        {
            mp[curr->data]++;
            curr = curr->next;
        }
        // curr= head;
        for(auto i : mp){
            if(i.second == 1){
                Node* newNode= new Node(i.first);
                temp->next = newNode;
                temp=temp->next;
                
            }
           
        }
        return dummy->next;
      
      // 2nd solution
      TC-O(n) and SC- O(1)
    Node* a=new Node(-1);
        Node* b=a;
        while(head){
            if(head&&head->next&&head->next->data==head->data){//check if has duplicate 
			//ignore all occurances if true
                int temp=head->data;
                while(head&&head->data==temp){
                    head=head->next;
                }
            }
            else{//if unique add to new list 
                a->next=head;
                a=a->next; 
                 head=head->next;
                a->next=nullptr;
               
            }
        }
        return b->next;
    }
};

//{ Driver Code Starts.
/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}



// Driver program to test above functions
int main()
{
	int T;
	cin >> T;


	
