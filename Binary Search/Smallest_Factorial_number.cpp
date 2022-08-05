//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    
    int find(int n) {
        int res = 0;
        for(int i = 5;i <= n;i = i * 5){
            res = res + n/i;
        }
        return res;
    }
        int findNum(int n)
        {
        //complete the function here
        int l = 5;
        int r = 10000000000;
        
        while(l <= r) {
            int mid = (l + r) /2;
            
            int c = find(mid);
            
            if(c == n)
                return (mid/5)*5;
            else if( c < n)
                l = mid + 1;
            else
                r = mid- 1;
        }
        }
        
    
};

// } Driver Code Ends
