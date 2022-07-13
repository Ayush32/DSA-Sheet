Given an array of integers (A[])  and a number x, find the smallest subarray with sum greater than the given value.

Note: The answer always exists. It is guaranteed that x doesn't exceed the summation of a[i] (from 1 to N).// { Driver Code Starts

A[] = {1, 4, 45, 6, 0, 19}
x  =  51

class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        
        // Your code goes here 
        int curr_sum = 0,min_len = n+1;
        int start = 0,end = 0;
        
        while(end < n)  {
            while(curr_sum <= x && end < n)
                curr_sum += arr[end++];
                
            while(curr_sum > x && start < n){
                if(end - start < min_len)
                    min_len = end-start;
                curr_sum -= arr[start++];
            }
        }
        return min_len;
    }
};

