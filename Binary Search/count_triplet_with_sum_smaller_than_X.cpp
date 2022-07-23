//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes 
	  long long  count  = 0;
	    if(n == 0)
	        return 0;
	        
	  
	    sort(arr,arr+n);
	    
	     for(int i = 0;i < n-2;i++)
	     {
	         
	         int low = i  +1;
	         int high = n - 1;
	         
	         while(low < high) {
	             long long sum_2 = arr[i] + arr[low] + arr[high];

	             if(sum_2 >= sum)
	                high--;
	             else{
	                count += high- low;
	                low++;
	             }
	         }
	     }
	     return count;
	}
		 

};

