class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        stack<int>st;  // copy the original stack value to new stack excluding middle element
        
        int count = 0;
        
        while(!s.empty()) {
            st.push(s.top());
            count++;
            s.pop();
            
            if(count == sizeOfStack/2) // if count reached middle then pop the middle element
                s.pop();
        }
        
        // push back value to original stack;
        
        while(!st.empty()) {
            s.push(st.top());
            st.pop();
        }
        
    }
};
